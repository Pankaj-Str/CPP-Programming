#include <iostream>

// Function that swaps the values of two variables using pointers
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Example of using a function with pointers
    int x = 5, y = 10;

    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;

    // Pass the addresses of x and y to the swap function
    swap(&x, &y);

    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    return 0;
}
