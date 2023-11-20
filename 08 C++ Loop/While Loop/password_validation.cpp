#include <iostream>
#include <string>

int main() {
    std::string password;

    std::cout << "Enter the password (at least 8 characters): ";

    while (true) {
        std::cin >> password;

        if (password.length() >= 8) {
            std::cout << "Password accepted." << std::endl;
            break;
        } else {
            std::cout << "Password is too short. Please enter at least 8 characters." << std::endl;
        }
    }

    return 0;
}
