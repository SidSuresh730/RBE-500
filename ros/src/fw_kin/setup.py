from setuptools import setup

package_name = 'fw_kin'

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
    description='Perform forward kinematics of manipulator from problem 3-5',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'man_3_5 = fw_kin.3_5_robot:main',
        ],
    },
)
