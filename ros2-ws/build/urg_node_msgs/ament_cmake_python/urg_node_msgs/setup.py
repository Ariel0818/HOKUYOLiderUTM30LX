from setuptools import find_packages
from setuptools import setup

setup(
    name='urg_node_msgs',
    version='1.0.1',
    packages=find_packages(
        include=('urg_node_msgs', 'urg_node_msgs.*')),
)
