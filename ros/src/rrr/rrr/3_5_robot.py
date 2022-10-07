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
from rclpy.node import Node

from std_msgs.msg import Float32MultiArray
from geometry_msgs.msg import Pose
from math import sin, cos, degrees, radians, atan2, sqrt

class Subscriber3_5(Node):

    #executes listener_callback when update to topic man_3_5 is detected
    def __init__(self, l1, l2, l3):
        super().__init__('sub_3_5')
        # link lengths of the manipulator
        self._l1 = l1
        self._l2 = l2
        self._l3 = l3
        #subscriber to joint variables for fw kin
        self.subscription_fwk = self.create_subscription(Float32MultiArray,'rrr_fwk', self.fw_callback, 10)
        #subscriber to end effector position for inv_kin
        self.subscription_ivk = self.create_subscription(Pose, 'rrr_ivk', self.inv_callback, 10)
        self.subscription_fwk  # prevent unused variable warning
        self.subscription_ivk # prevent unused variable warning 

    def fw_callback(self, msg):
        #hold value of msg (type is Float32MultiArray)
        i = msg.data
        #unpack the data ASSUME the joint variables are given in order (q1, q2, q3)
        q1 = i[0]
        q2 = i[1]
        q3 = i[2]
        #call to the forward kinematics method that calculates R and o
        (r, o_T) = self._fw_kin(q1, q2, q3)
        #print message to console
        # Use if METHOD 1 used 
        # self.get_logger().info('R:\n [[%.2f, %.2f, %.2f]\n[%.2f, %.2f, %.2f]\n[%.2f, %.2f, %.2f]]\n o:\n%.2f'\
        #                        '\n%.2f\n%.2f'% (r[0,0], r[0,1], r[0,2], 
        #                                     r[1,0], r[1,1], r[1,2],
        #                                     r[2,0], r[2,1], r[2,2],
        #                                     o_T[0,0], o_T[0,1], o_T[0,2])) 
        # Use if METHOD 2 used
        self.get_logger().info('R:\n [[%.2f, %.2f, %.2f]\n[%.2f, %.2f, %.2f]\n[%.2f, %.2f, %.2f]]\n o:\n%.2f'\
                               '\n%.2f\n%.2f'% (r[0][0], r[0][1], r[0][2], 
                                            r[1][0], r[1][1], r[1][2],
                                            r[2][0], r[2][1], r[2][2],
                                            o_T[0], o_T[1], o_T[2]))
    
    def inv_callback(self, msg):
        #unpack pose position data
        x = msg.position.x
        y = msg.position.y
        z = msg.position.z
        #solve inverse kinematics problem
        (q1, q2, q3) = self._inv_kin(x, y, z)
        #print to console
        self.get_logger().info('Joint values are: %.2f, %.2f, %.2f' % (q1, q2, q3))

    #forward kinematics
    def _fw_kin(self, q1, q2, q3): 

        # Calculate the cosines and sines of the joint variables
        c1 = cos(radians(q1))
        c2 = cos(radians(q2))
        c3 = cos(radians(q3))
        s1 = sin(radians(q1))
        s2 = sin(radians(q2))
        s3 = sin(radians(q3))
        # Assign link lengths to local variables from instance variables
        l1, l2, l3 = self._l1, self._l2, self._l3
        # Direct creation of the R matrix based on hand-done calculations
        r = [[c1*c2*c3-c1*s2*s3, -c1*c2*s3-c1*s2*c3, -s1],
             [s1*c2*c3-s1*s2*s3, -s1*c2*s3-s1*s2*c3, c1],
             [-s2*c3-c2*s3, s2*s3-c2*c3, 0]]
        # Direct creation of the o vector based on hand-done calculations
        o_T = [l3*c1*c2*c3-l3*c1*s2*s3+l2*c1*c2, l3*s1*c2*c3-l3*s1*s2*s3+l2*s1*c2, -l3*s2*c3-l3*c2*s3-l2*s2+l1]
        
        return (r, o_T)

    #inverse kinematics
    def _inv_kin(self, x, y, z):
        #assign link lengths to local variables for ease of use
        l1, l2, l3 = self._l1, self._l2, self._l3
        #calculations in HW4 ROS section
        q1 = degrees(atan2(y, x))
        d = (x**2 + y**2 + z**2 + l1**2 - 2*l1*z - l2**2 - l3**2)/(2*l2*l3)
        q3 = degrees(atan2(sqrt(1-d**2), d)) # elbow down solution
        q2 = degrees(atan2(l1-z, sqrt(x**2+y**2))) - degrees(atan2(l3*sin(radians(q3)), l2+l3*cos(radians(q3))))

        return(q1,q2,q3)


#main method
def main(args=None):

    #initialize subscriber program
    rclpy.init(args=args)
    #create instance of Subscriber3_5 with link lengths all 1
    sub_3_5 = Subscriber3_5(1,1,1)
    #execute work until the context is shut down (i.e. Ctrl+C, etc.)
    rclpy.spin(sub_3_5)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sub_3_5.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


### Tests
# ros2 topic pub --once /man_3_5 std_msgs/msg/Float32MultiArray "{data: [30, 30, 30]}"
