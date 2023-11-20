#include <iostream>

// Global variable with external linkage
extern int globalVar;

// Function declaration
void displayMessage();

int main() {
    // Automatic storage class (default for local variables)
    auto int autoVar = 10;

    // Register storage class (requests compiler to store the variable in a register)
    register int registerVar = 20;

    // Static storage class (preserves the value between function calls)
    static int staticVar = 30;

    // External storage class (variable is declared in another file)
    extern int externVar;

    // Displaying values
    std::cout << "Auto Variable: " << autoVar << std::endl;
    std::cout << "Register Variable: " << registerVar << std::endl;
    std::cout << "Static Variable: " << staticVar << std::endl;
    std::cout << "Extern Variable from another file: " << externVar << std::endl;

    // Calling a function
    displayMessage();

    return 0;
}

// Definition of the global variable
int globalVar = 50;

// Definition of the function
void displayMessage() {
    // Accessing the global variable
    std::cout << "Global Variable inside the function: " << globalVar << std::endl;

    
    std::cout << "Visit " << "www.codeswithpankaj.com" << " for C++ tutorials." << std::endl;
}
