#include <iostream>

int main() {
    // Array search
    int myArray[] = {10, 20, 30, 40, 50};
    int searchValue;

    std::cout << "Enter a value to search for: ";
    std::cin >> searchValue;

    bool found = false;
    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        if (myArray[i] == searchValue) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Value found in the array.\n";
    } else {
        std::cout << "Value not found in the array.\n";
    }

    return 0;
}
