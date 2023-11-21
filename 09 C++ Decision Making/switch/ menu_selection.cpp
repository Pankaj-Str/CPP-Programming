#include <iostream>

int main() {
    char choice;

    std::cout << "Select an option (A, B, C): ";
    std::cin >> choice;

    switch (choice) {
        case 'A':
            std::cout << "Option A selected." << std::endl;
            break;
        case 'B':
            std::cout << "Option B selected." << std::endl;
            break;
        case 'C':
            std::cout << "Option C selected." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
