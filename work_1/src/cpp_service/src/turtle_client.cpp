#include "rclcpp/rclcpp.hpp"
#include "interface/srv/partol.hpp"
#include "rclcpp/client.hpp"
#include "rclcpp/timer.hpp"
#include "rcl_interfaces/msg/parameter.hpp"
#include "rcl_interfaces/msg/parameter_value.hpp"
#include "rcl_interfaces/msg/parameter_type.hpp"
#include "rcl_interfaces/srv/set_parameters.hpp"

#include <chrono>
#include <ctime>

using namespace std::chrono_literals;

class TurtlrCilentNode : public rclcpp::Node
{
private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Client<interface::srv::Partol>::SharedPtr client_;

public:
    explicit TurtlrCilentNode(): Node("turtle_client")
    {
        srand(time(NULL));
        client_ = create_client<interface::srv::Partol>("partor");
        timer_ = create_wall_timer(5s, [&]()-> void {
            RCLCPP_INFO(get_logger(), "开始");

            while (!client_->wait_for_service(1s))
            {
                RCLCPP_INFO(get_logger(), "等待服务");
                if(!rclcpp::ok()){
                    RCLCPP_ERROR(get_logger(), "rclcpp挂了");
                    return;
                }
            }
            RCLCPP_INFO(get_logger(), "连接到服务器");

            auto request = std::make_shared<interface::srv::Partol::Request>();

            RCLCPP_INFO(get_logger(), "rand() : %d" , rand() % 15);

            request->target_x = rand() % 15;
            request->target_y = rand() % 15;

            client_->async_send_request(request, [&](rclcpp::Client<interface::srv::Partol>::SharedFuture result_future){
                auto response = result_future.get();
                if(response->result == interface::srv::Partol::Response::SUCCESS){
                    RCLCPP_INFO(get_logger(), "请求成功");
                }
                if(response->result == interface::srv::Partol::Response::FAIL){
                    RCLCPP_INFO(get_logger(), "请求失败");
                }
                
            });            
        });
       
    }

    // 创建客户端发送请求，返回结果
    rcl_interfaces::srv::SetParameters::Response::SharedPtr call_set_parameters(const rcl_interfaces::msg::Parameter &param){
        auto param_client_ = create_client<rcl_interfaces::srv::SetParameters>("/turtle_control/set_parameters");

        while (!param_client_->wait_for_service(1s))
        {
            RCLCPP_INFO(get_logger(), "等待服务");
            if(!rclcpp::ok()){
                RCLCPP_ERROR(get_logger(), "rclcpp挂了");
                return NULL;
            }
        }

        auto request = std::make_shared<rcl_interfaces::srv::SetParameters::Request>();
        RCLCPP_INFO(get_logger(), "rand() : %d" , rand() % 15);
        request->parameters.push_back(param);
        auto result_future = param_client_->async_send_request(request);
        rclcpp::spin_until_future_complete(this->get_node_base_interface(), result_future);
        auto response = result_future.get();
        return response;
            
               

    }
    // 更新参数
    void update_server_param_k(double k){
        rcl_interfaces::msg::Parameter param;
        param.name = "k";
        auto param_value = rcl_interfaces::msg::ParameterValue();
        param_value.type = rcl_interfaces::msg::ParameterType::PARAMETER_DOUBLE;
        param_value.double_value = k;
        param.value = param_value;



        auto response = call_set_parameters(param);
    }

   
};

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtlrCilentNode>();
    node->update_server_param_k(4.0);
    rclcpp::spin(node);
    rclcpp::shutdown();
}


