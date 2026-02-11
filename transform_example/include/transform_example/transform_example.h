#ifndef TRANSFORM_EXAMPLE
#define TRANSFORM_EXAMPLE

#include <rclcpp/rclcpp.hpp>
// ADD INCLUDES HERE!!!

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

    // SETUP TF BUFFER AND TF LISTENER HERE
};

#endif // TRANSFORM_EXAMPLE