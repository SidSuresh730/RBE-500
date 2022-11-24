from setuptools import find_packages
from setuptools import setup

setup(
    name='scara_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('scara_interfaces', 'scara_interfaces.*')),
)
