#include <iostream>

// Function declaration
void displayMessage();

int main() {
    // Automatic storage class
    int localVar = 5;

    // Static storage class
    static int staticVar = 10;

    // External linkage variable
    extern int globalVar;

    // Displaying values
    std::cout << "Local Variable: " << localVar << std::endl;
    std::cout << "Static Variable: " << staticVar << std::endl;
    std::cout << "Global Variable: " << globalVar << std::endl;

    // Calling a function
    displayMessage();

    return 0;
}

// Static variable definition
static int staticVar = 20;

// Global variable definition
int globalVar = 30;

// Definition of the function
void displayMessage() {
    // Accessing the global variable
    std::cout << "Global Variable inside the function: " << globalVar << std::endl;

    
    std::cout << "Check out tutorials on C++ at www.codeswithpankaj.com" << std::endl;
}
