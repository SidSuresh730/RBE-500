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
from geometry_msgs.msg import Quaternion
from math import sin, cos, radians

class ZYXSubscriber(Node):

    #executes listener_callback when update to topic euler is detected
    def __init__(self):
        super().__init__('euler_subscriber')
        self.subscription = self.create_subscription(Float32MultiArray,'euler', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        #hold value of msg (type is Float32MultiArray)
        i = msg.data
        #unpack the data ASSUME the Euler angles are given in DEGREES and in the order (Phi, Theta, Psi)
        phi = i[0]
        theta = i[1]
        psi = i[2]
        #call to the conversion method following the ZYX-Euler Angle convention
        q = self._to_quat(psi, theta, phi)
        #print message to console
        self.get_logger().info('Created quaternion: [x: %f, y: %f, z: %f, w: %f] from ZYX-Euler angles: phi: %f, theta: %f, psi: %f' % (q.x, q.y, q.z, q.w, phi, theta, psi)) 

    def _to_quat(self, psi, theta, phi): #ZYX convention (Z-psi, Y'-theta, X''-phi)
        q = Quaternion()
        c_psi = cos(radians(psi*0.5))
        s_psi = sin(radians(psi*0.5))
        c_theta = cos(radians(theta*0.5))
        s_theta = sin(radians(theta*0.5))
        c_phi = cos(radians(phi*0.5))
        s_phi = sin(radians(phi*0.5))

        q.w = c_phi*c_theta*c_psi+s_phi*s_theta*s_psi
        q.x = s_phi*c_theta*c_psi-c_phi*s_theta*s_psi
        q.y = c_phi*s_theta*c_psi+s_phi*c_theta*s_psi
        q.z = c_phi*c_theta*s_psi-s_phi*s_theta*c_psi

        return q



#main method
def main(args=None):

    #initialize subscriber program
    rclpy.init(args=args)

    euler_subscriber = ZYXSubscriber()

    rclpy.spin(euler_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    euler_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
