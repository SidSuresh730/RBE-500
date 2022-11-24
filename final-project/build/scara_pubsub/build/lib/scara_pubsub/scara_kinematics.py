# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
import math # Using math.cos and math.sin for the Quat math
import numpy as np # Matrix multiplication
from rclpy.node import Node # Using the Node class for simple set up
from sensor_msgs.msg import JointState
from geometry_msgs.msg import Pose
from math import cos, sin, atan2, degrees, radians, sqrt, pow # Used because atan2 returns the results in radias
from scara_interfaces.srv import InvKin
from std_msgs.msg import Float64MultiArray

class ScaraFwdKin(Node):
    
    def __init__(self):
        super().__init__('scara_fwd_kin')
        self.subscription = self.create_subscription(JointState, 'joint_states', self.listener_callback, 10) 
    
        self.publisher_ = self.create_publisher(Pose, 'scara_end_eff_pos', 10) # Set up our publisher to be initialized with standard message type Int 
        
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        # Variables
        axel_offset = 0.05
        width = .1
        length = 2
        l1 = length + (3 * width)/2 
        l2 = length - 2 * axel_offset
        l3 = length
    
        t1 = msg.position[0]
        t2 = msg.position[1]
        d3 = msg.position[2]
        # Fwd Kin Math
    
        T01 = ([[cos(t1), -sin(t1), 0, l2 * cos(t1)],[sin(t1), cos(t1), 0, l2 * sin(t1)],[0, 0, 1, l1], [0, 0, 0, 1]])
    
        T12 = ([[cos(t2), -sin(t2), 0, l3 * cos(t2)], [sin(t2), cos(t2), 0, l3 * sin(t2)], [0, 0, 1, d3], [0, 0, 0, 1]])
    
        T02 = np.dot(T01, T12)
        x = T02[0][3]
        y = T02[1][3]
        z = T02[2][3]
        self.publisher_callback(x, y, z)
        #self.get_logger().info('\nPosition (t1, t2, d3, x, y, z): [%f, %f, %f, %f, %f, %f]' % (degrees(t1), degrees(t2), d3, x, y, z))

    def publisher_callback(self, x, y, z):
        msg = Pose()
        msg.position.x = x
        msg.position.y = y
        msg.position.z = z
        self.publisher_.publish(msg) # Publish the message

class InvKinService(Node):
    
    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(InvKin, 'inv_kin', self.inv_kin)
    
    def inv_kin(self, request, response):
        print("Hello! Inv Kin")
        axel_offset = 0.05
        width = .1
        length = 2
        l1 = length + (3 * width)/2 
        l2 = length - 2 * axel_offset
        l3 = length
    
        x = request.x
        y = request.y
        z = request.z
    
        d = sqrt(pow(x, 2) + pow(y, 2))
        c_gamma = (pow(d, 2) + pow(l2, 2) - pow(l3, 2)) / (2 * d * l2)
        gamma = degrees(atan2(sqrt(1 - pow(c_gamma, 2)), c_gamma))
        t3 = degrees(atan2(y, x))
        t1 = t3 - gamma
    
        c_delta = (pow(l2, 2) + pow(l3, 2) - pow(d, 2)) / (2 * l2 * l3)
        delta = degrees(atan2(sqrt(1 - pow(c_delta, 2)), c_delta))
        t2 = 180 - delta
    
        d3 = z - l1
        self.get_logger().info('Incoming request\nx: %f, y: %f, z: %f' % (x, y, z))

        response.t1 = t1
        response.t2 = t2
        response.d3 = d3

        return response

def main2(args=None):
    print("Hi main2!")
    rclpy.init(args=args)
    #fwd_kin = ScaraFwdKin()
    inv_kin = InvKinService()
    #rclpy.spin(fwd_kin)
    rclpy.spin(inv_kin)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    #minimal_subscriber_fwd.destroy_node()
    rclpy.shutdown()

def main(args=None):
    print("Hi main!")
    rclpy.init(args=args)
    fwd_kin = ScaraFwdKin()
    #inv_kin = InvKinService()
    rclpy.spin(fwd_kin)
    #rclpy.spin(inv_kin)
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber_fwd.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()