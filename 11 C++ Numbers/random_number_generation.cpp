#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 10
    int randomNum = std::rand() % 10 + 1;

    std::cout << "Random Number: " << randomNum << std::endl;

    return 0;
}
