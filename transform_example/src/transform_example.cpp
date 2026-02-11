#include <transform_example/transform_example.h>

TransformExample::TransformExample() : Node("transform_example")
{
    // SETUP TRANSFORM BUFFER AND LISTENER HERE
}

void TransformExample::printEEFrame()
{
    // LOOKUP TRANSFORM HERE
    // IF SUCCESSFUL PRINT POSITION HERE
    // IF SUCCESSFUL, PRINT ORIENTATION HERE
    // IF NOT SUCCESSFUL, PRINT ERROR MESSAGE
}

int main(int argc, char** argv)
{
    // initialize the node
    rclcpp::init(argc, argv);
    
    // create instance of class
    auto node = std::make_shared<TransformExample>();
    
    // Set loop rate
    rclcpp::Rate rate = rclcpp::Rate(10); // Hz

    while (rclcpp::ok())
    {
        node->printEEFrame();
        rclcpp::spin_some(node);
        rate.sleep();
    }
    rclcpp::shutdown();
    return 0;
}