#include <iostream>

int main() {
    int sum = 0;
    int number;

    std::cout << "Enter numbers (enter 0 to stop): ";

    while (true) {
        std::cin >> number;

        if (number == 0) {
            break;
        }

        sum += number;
    }

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
