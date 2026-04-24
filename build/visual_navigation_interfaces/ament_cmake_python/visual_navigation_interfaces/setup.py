from setuptools import find_packages
from setuptools import setup

setup(
    name='visual_navigation_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('visual_navigation_interfaces', 'visual_navigation_interfaces.*')),
)
