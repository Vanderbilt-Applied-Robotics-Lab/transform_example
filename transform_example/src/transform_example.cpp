#include <transform_example/transform_example.h>

TransformExample::TransformExample() : Node("transform_example")
{
    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
}

void TransformExample::printEEFrame()
{
    try
    {
        geometry_msgs::msg::TransformStamped transform = tf_buffer_->lookupTransform("J4", "workpiece", tf2::TimePointZero);
        
        // print position
        RCLCPP_INFO(this->get_logger(), 
            "Position -- x: %0.2f, y: %0.2f, z: %0.2f", 
            transform.transform.translation.x, transform.transform.translation.y, transform.transform.translation.z
        );

        // print orientation
        RCLCPP_INFO(this->get_logger(), 
            "Orientation -- w: %0.2f, x: %0.2f, y: %0.2f, z: %0.2f", 
            transform.transform.rotation.w, transform.transform.rotation.x, transform.transform.rotation.y, transform.transform.rotation.z
        );
    }
    catch (const tf2::TransformException & ex)
    {
        RCLCPP_ERROR(this->get_logger(), "lookup failed! Reason: %s", ex.what());
    }
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