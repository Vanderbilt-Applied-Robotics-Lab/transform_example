#ifndef TRANSFORM_EXAMPLE
#define TRANSFORM_EXAMPLE

#include <rclcpp/rclcpp.hpp>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"

/**
 * Example of using tf2 to look up a transform
 */
class TransformExample : public rclcpp::Node
{
public:
    /**
     * Main constructor
     */
    TransformExample();

    /**
     * Destructor
     */
    ~TransformExample() = default;

    /**
     * Looks up the transformation between the ee frame and the base frame
     * and prints out the value
     */
    void printEEFrame();
    
private:

    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
    std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
};


#endif // TRANSFORM_EXAMPLE