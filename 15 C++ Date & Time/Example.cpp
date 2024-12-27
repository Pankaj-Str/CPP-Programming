#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

int main() {
    // Get the current time point
    auto currentTimePoint = chrono::system_clock::now();

    // Convert the time point to a time_t object
    time_t currentTime = chrono::system_clock::to_time_t(currentTimePoint);

    // Convert the time_t object to a string
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localtime(&currentTime));

    // Display the current date and time
    cout << "Current Date and Time: " << buffer << endl;

    return 0;
}

