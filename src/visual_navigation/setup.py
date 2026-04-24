import os
from glob import glob
from setuptools import setup, find_packages

package_name = 'visual_navigation'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
            glob(os.path.join('launch', '*launch.py'))),
        (os.path.join('share', package_name, 'models'),
            glob('visual_navigation/models/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tasneem',
    maintainer_email='tasneem.yasser23@gmail.com',
    description='Distributed Visual Navigation Hint System using ROS 2',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_node     = visual_navigation.camera_node:main',
            'object_node     = visual_navigation.object_node:main',
            'depth_node      = visual_navigation.depth_node:main',
            'roi_node        = visual_navigation.roi_node:main',
            'motion_node     = visual_navigation.motion_node:main',
            'vo_node         = visual_navigation.vo_node:main',
            'navigation_node = visual_navigation.navigation_node:main',
            'action_node     = visual_navigation.action_node:main',
        ],
    },
)