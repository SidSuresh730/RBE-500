#!/bin/bash

# H4 Test cases 

# Test case 1
ros2 topic pub --once /rrr_fwk std_msgs/msg/Float32MultiArray "{data: [30, 30, 30]}"
sleep 1
# gives 
# inverse kinematics for test case 1
ros2 topic pub --once /rrr_ivk geometry_msgs/msg/Pose "{position: {x: 1.18, y: 0.68, z: -0.37}}"
sleep 1
# Test case 2
ros2 topic pub --once /rrr_fwk std_msgs/msg/Float32MultiArray "{data: [60, 30, 70]}"
sleep 1
# gives
# inverse kinematics for test case 2
ros2 topic pub --once /rrr_ivk geometry_msgs/msg/Pose "{position: {x: 0.35, y: 0.60, z: -0.48}}"
sleep 1
# Test case 3
ros2 topic pub --once /rrr_fwk std_msgs/msg/Float32MultiArray "{data: [0, 40, 50]}"
sleep 1
# gives
# inverse kinematics for test case 3
ros2 topic pub --once /rrr_ivk geometry_msgs/msg/Pose "{position: {x: 0.77, y: 0.00, z: -0.64}}"
sleep 1
# Test case 4
ros2 topic pub --once /rrr_fwk std_msgs/msg/Float32MultiArray "{data: [-20, 75, 25]}"
sleep 1
# gives
# inverse kinematics for test case 4
ros2 topic pub --once /rrr_ivk geometry_msgs/msg/Pose "{position: {x: 0.08, y: -0.03, z: -0.95}}"
#sleep 1
# Test case 5
ros2 topic pub --once /rrr_fwk std_msgs/msg/Float32MultiArray "{data: [179, 25, 15]}"
sleep 1
# gives
# inverse kinematics for test case 5
ros2 topic pub --once /rrr_ivk geometry_msgs/msg/Pose "{position: {x: -1.67, y: 0.03, z: -0.07}}"


