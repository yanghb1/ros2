import launch
import launch.launch_description_sources
import launch_ros
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
     #声明一个launch参数
    action_declare_startup_rqt = launch.actions.DeclareLaunchArgument("startup_rqt", default_value="False")
    # 替换
    startup_rqt = launch.substitutions.LaunchConfiguration('startup_rqt', default="False")


    # 动作1.启动其他launch
    multisim_launch_path = [get_package_share_directory('turtlesim'), '/launch/', 'multisim.launch.py']
    action_include_launch = launch.actions.IncludeLaunchDescription(
        launch.launch_description_sources.PythonLaunchDescriptionSource(multisim_launch_path))
    
    # 动作2.打印数据
    action_log_info = launch.actions.LogInfo(msg=str(multisim_launch_path))

    # 动作3.执行进程，其实就是执行一个命令行
    action_cmd = launch.actions.ExecuteProcess(
        condition=launch.conditions.IfCondition(startup_rqt),
        cmd=['rqt'])

    # 动作4.组织动作成组，把多个动作放到一组
    action_group = launch.actions.GroupAction([
        #动作5.定时器
        launch.actions.TimerAction(period=3.0, actions=[action_include_launch]),
        launch.actions.TimerAction(period=6.0, actions=[action_cmd])
    ])

    return launch.LaunchDescription([
        action_declare_startup_rqt,
        #actions动作
        action_log_info,
        action_group
        ])