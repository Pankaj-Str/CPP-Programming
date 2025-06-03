#include <iostream>

int main() {
    // Array and pointer relationship
    int numbers[] = {1, 2, 3, 4, 5};
    int* pointer = numbers;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << &numbers[i]<< std::endl;
        
    }

    return 0;
}
