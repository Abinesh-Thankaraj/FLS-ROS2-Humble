# FLS-ROS2-Humble

A ROS2 migration of the [nps_uw_multibeam_sonar package](https://github.com/Field-Robotics-Lab/nps_uw_multibeam_sonar) for the  Blueview p900 multibeam sonar. 

## Requirements

- **ROS2 Humble**
- **Gazebo 11.X.X**
- NVIDIA GPU with at least 4GB memory
- NVIDIA CUDA Toolkit (installation guide [here](https://docs.nvidia.com/cuda/cuda-installation-guide-linux/index.html) and architecture compatibility [here](https://docs.nvidia.com/cuda/cuda-toolkit-release-notes/index.html))

This plugin was developed and tested using:
- CUDA 12.4
- NVIDIA driver 550.142
- NVIDIA GPU - Quadro M1200 Mobile

## Dependencies Required

- `ros-humble-image-pipeline`
- `ros-humble-velodyne-simulator`

---

## Running the Project Locally

### Step 1: Install Necessary Dependencies
Update the system and install required ROS2 packages:
```bash
sudo apt update
sudo apt install ros-humble-image-pipeline ros-humble-velodyne-simulator
```

### Step 2: Create a Workspace and Clone Necessary Packages
Create a new workspace, navigate to the src directory, and clone the required repositories:
```bash
mkdir -p sonar_ros2/src
cd sonar_ros2/src

git clone https://github.com/Abinesh-Thankaraj/FLS-ROS2-Humble.git
git clone https://github.com/Abinesh-Thankaraj/hydrographic_msgs.git
```
Navigate back to the workspace:
```bash
cd ..
```

### Step 3: Build and Source the Package
Build the package, source it, and add it to your ROS2 environment:
```bash
colcon build
source install/setup.bash
echo "source $(pwd)/install/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

### Step 4: Launch the Sample File
Run the launch file for the `nps_uw_multibeam_sonar` package:
```bash
ros2 launch nps_uw_multibeam_sonar sonar_tank_blueview_p900_nps_multibeam.launch.py
```
![Image Description](FLS-Sample.png)

---

# Sonar-ROS2-Humble
Multibeam sonar Gazebo plugin with NVIDIA Cuda library 

## Wiki

For additional details and usage, refer to the [Field Robotics Lab Wiki](https://github.com/Field-Robotics-Lab/dave/wiki/Multibeam-Forward-Looking-Sonar).

This plugin follows the same command-line conventions as ROS1, but with the updated ROS2 syntax.
