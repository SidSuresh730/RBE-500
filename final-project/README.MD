## README.MD ####
```
To run forward kinematics subscriber
```
ros2 run scara_pubsub listener
```
To run inverse kinematics server
```
ros2 run scara_pubsub service

``` 
Service requests: Change values
```
ros2 service call /inv_kin scara_interfaces/srv/InvKin "{x: 0, y: 1, z: 1}"

```
Position commands to robot: change values
```
ros2 topic pub --once /forward_position_controller/commands std_msgs/Float64MultiArray 'data: [.7854, .7845, 0]'

```
Topic echo end effector position
```
ros2 topic echo scara_end_eff_pos
```
Topic echo joint states
```
ros2 topic echo joint_states
