#include <iostream>
#include <chrono>
#include <ctime>

int main() {
    // Get the current time point
    auto currentTimePoint = std::chrono::system_clock::now();

    // Convert the time point to a time_t object
    std::time_t currentTime = std::chrono::system_clock::to_time_t(currentTimePoint);

    // Convert the time_t object to a string
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));

    // Display the current date and time
    std::cout << "Current Date and Time: " << buffer << std::endl;

    return 0;
}
