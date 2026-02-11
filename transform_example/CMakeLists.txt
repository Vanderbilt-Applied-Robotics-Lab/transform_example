cmake_minimum_required(VERSION 3.8)
project(transform_example)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)

## include dir
include_directories(include)

# Declare executables 
add_executable(transform_example src/transform_example.cpp)

# linking
ament_target_dependencies(
    transform_example
    rclcpp
    tf2
    tf2_ros
)

# install
install(TARGETS transform_example
  DESTINATION lib/${PROJECT_NAME})

ament_package()
