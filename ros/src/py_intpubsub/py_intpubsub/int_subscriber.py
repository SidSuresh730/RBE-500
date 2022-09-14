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

from std_msgs.msg import UInt8

class IntSubscriber(Node):

    #similar to IntPublisher, executes listener_callback when update to hw1 is detected
    def __init__(self):
        super().__init__('int_subscriber')
        self.subscription = self.create_subscription(UInt8,'hw1', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        #hold value of msg (type is UInt8)
        i = msg.data
        #hold the word 'even' or 'odd
        kind = ''
        #logic to determine evenness or oddness
        if (i%2==0):
            kind = 'even'
        else:
            kind = 'odd'
        #print message to console
        self.get_logger().info('I received %d. It is an %s number.' % (i, kind))

# see int_publisher:main
def main(args=None):
    rclpy.init(args=args)

    int_subscriber = IntSubscriber()

    rclpy.spin(int_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    int_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
