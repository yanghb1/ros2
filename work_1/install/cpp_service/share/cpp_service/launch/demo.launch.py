import launch
import launch_ros

def generate_launch_description():

    #声明一个launch参数
    action_declare_arg_background_g = launch.actions.DeclareLaunchArgument("launch_arg_bg", default_value="150")


    # 产生launch描述

    action_node_turtlesim_node = launch_ros.actions.Node(
        package = 'turtlesim',
        executable='turtlesim_node',
        parameters=[{'background_g':launch.substitutions.LaunchConfiguration('launch_arg_bg', default="150")}],
        output = 'screen',
    )

    action_node_turtle_control = launch_ros.actions.Node(
        package = 'cpp_service',
        executable='turtle_control',
        output = 'log'
    )

    action_node_turtle_client = launch_ros.actions.Node(
        package = 'cpp_service',
        executable='turtle_client',
        output = 'both'
    )

    return launch.LaunchDescription([
        #actions动作
        action_declare_arg_background_g,
        action_node_turtlesim_node,
        action_node_turtle_control,
        action_node_turtle_client    ])