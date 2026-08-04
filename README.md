# transform_example
Example of using TF2 to look up robot transforms.

## Downloading Code
1. Navigate to examples workspace source folder: `cd ~/workspaces/examples_ws/src`
2. Download code: `git clone https://github.com/Vanderbilt-Applied-Robotics-Lab/transform_example.git`

## Compiling Code
1. Navigate to examples workspace: `cd ~/workspaces/examples_ws`
2. Compile the code: `colcon build`

## Running Code
1. Navigate to examples workspace: `cd ~/workspaces/examples_ws`
2. Source the code: `source install/setup.bash`
3. Run previous example: `ros2 launch scara_urdf_example scara.launch.py`
4. Open a new terminal window
5. Source the code: `source install/setup.bash`
6. Run the example: `ros2 launch transform_example transform_example.launch.yaml`
7. Add the robot and TF to RVIZ using the method described in the lecture slides
8. Move the robot around using the joint state publisher GUI and see the printed transforms update 
