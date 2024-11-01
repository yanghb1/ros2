#include "rclcpp/rclcpp.hpp"
#include "rclcpp/publisher.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "turtlesim/msg/pose.hpp"
#include "interface/srv/partol.hpp"
#include "rcl_interfaces/msg/set_parameters_result.hpp"

#include <chrono>
#include <cmath>

using namespace std::chrono_literals;

class TurtlrControlNode : public rclcpp::Node
{
private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publishr_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_;
    rclcpp::Service<interface::srv::Partol>::SharedPtr service_;
    OnSetParametersCallbackHandle::SharedPtr parameter_callback_handle_;
    double target_x = 1.0;
    double target_y = 1.0;
    double k = 1;
    double max_speed_ = 1.0;

public:
    explicit TurtlrControlNode(): Node("turtle_control")
    {
        declare_parameter("k", 1.0);
        declare_parameter("max_speed", 1.0);
        get_parameter("k", k);
        get_parameter("max_speed", max_speed_);

        parameter_callback_handle_ = add_on_set_parameters_callback([&](const std::vector<rclcpp::Parameter> & parameters) -> rcl_interfaces::msg::SetParametersResult{
            rcl_interfaces::msg::SetParametersResult result;
            result.successful = true;
            for (const auto & parameter : parameters) {
                if (parameter.get_name() == "k") {
                    k = parameter.as_double();

                    RCLCPP_INFO(get_logger(), "k : %f", k);

                    result.successful = true;
                    result.reason = "the reason it could not be allowed";
                }else if(parameter.get_name() == "max_speed"){
                    max_speed_ = parameter.as_double();

                    RCLCPP_INFO(get_logger(), "max_speed_ : %f", max_speed_);
                }
            }
            return result;

        });

        service_ = create_service<interface::srv::Partol>("partor", [this](const interface::srv::Partol::Request::SharedPtr request
        , interface::srv::Partol::Response::SharedPtr response){
            if(request->target_x > 0 
            && request->target_x < 12
            && request->target_y > 0 
            && request->target_y < 12){
                target_x = request->target_x;
                target_y = request->target_y;
                response->result = interface::srv::Partol::Response::SUCCESS;
            }else{
                response->result = interface::srv::Partol::Response::FAIL;
            }
        });

        publishr_ = create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        subscriber_ = create_subscription<turtlesim::msg::Pose>("/turtle1/pose", 10, [this](const turtlesim::msg::Pose::SharedPtr pose){
            auto d = std::sqrt(std::pow(target_x - pose->x, 2) + std::pow(target_y - pose->y, 2));

            auto angle = std::atan2(target_y - pose->y, target_x - pose->x) - pose->theta;

            auto msg = geometry_msgs::msg::Twist();

            if(d > 0.1){
                if(std::abs(angle) > 0.2){
                    msg.angular.z = std::abs(angle);
                }else{
                    msg.linear.x = k * d;
                }
            }

            if(msg.linear.x > max_speed_)
                msg.linear.x = msg.linear.x;

            publishr_->publish(msg);
        });
    }

};

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TurtlrControlNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
}


