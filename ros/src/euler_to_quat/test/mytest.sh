#!/bin/bash


ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [30, 30, 30]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [0, 0, 90]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [0, 90, 0]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [90, 90, 90]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [180, 0, 180]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [180, 180, 180]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [90, 0, 0]}"
sleep 1
ros2 topic pub --once /euler std_msgs/msg/Float32MultiArray "{data: [270, 360, 181]}"
sleep 1
