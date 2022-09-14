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

#import to use rclpy's Node class
import rclpy
from rclpy.node import Node

#import the UInt8 message type to structure data passed to topic
from std_msgs.msg import UInt8

# definition of class IntPublisher that inherits from Node
class IntPublisher(Node):

    #constructor
    def __init__(self):
        #first call Node class constructor -> standard practice for inheritance
        super().__init__('int_publisher')

        #declare that the node publishes msgs of type UInt8 to topic 'hw1' and queue size is 10
        self.publisher_ = self.create_publisher(UInt8, 'hw1', 10)

        #create a timer that calls the timer_callback method every 1 second
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        #counter that will be incremented at every callback
        self.i = 0

    #function triggered by self.timer
    def timer_callback(self):
        #construct the message of type UInt8
        #publish the counter to the topic hw1 as per constructor
        msg = UInt8()
        msg.data = self.i
        self.publisher_.publish(msg)

        # log messages to the terminal
        self.get_logger().info('Publishing: %d' % self.i)

        #increment counter
        self.i += 1

#main function
def main(args=None):

    #initialize publisher program
    rclpy.init(args=args)
    #create instance of IntPublisher
    int_publisher = IntPublisher()

    #execute work until the context is shut down (i.e. Ctrl+C, etc.)
    rclpy.spin(int_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    int_publisher.destroy_node()
    rclpy.shutdown()

#call main function when program is executed
if __name__ == '__main__':
    main()
