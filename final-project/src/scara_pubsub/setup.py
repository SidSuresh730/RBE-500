from setuptools import setup

package_name = 'scara_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Siddarth Suresh',
    maintainer_email='ssuresh@wpi.edu',
    description='RBE 500 Final Project forward kin pub/sub and inverse kin service client',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'listener = scara_pubsub.scara_kinematics:main',
		'service = scara_pubsub.scara_kinematics:main2',
        ],
    },
)
