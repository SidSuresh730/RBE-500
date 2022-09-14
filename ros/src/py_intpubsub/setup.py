from setuptools import setup

package_name = 'py_intpubsub'

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
    description='RBE500 HW1 pub/sub example',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
		'talker = py_intpubsub.int_publisher:main',
		'listener = py_intpubsub.int_subscriber:main',
        ],
    },
)
