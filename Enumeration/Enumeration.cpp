#include <iostream>
using namespace std;

// Define an enumeration named 'Color' with three constants
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main(){
    
    // Declare a variable of the 'Color' enumeration type
    Color chosenColor = RED;
    cout<<chosenColor<<endl;

    // Use the variable and the constants
    if (chosenColor == RED) {
        cout << "You chose RED." << std::endl;
    } else if (chosenColor == GREEN) {
        cout << "You chose GREEN." << std::endl;
    } else if (chosenColor == BLUE) {
        cout << "You chose BLUE." << std::endl;
    }

    // Enumerations are implicitly convertible to integers
    int colorIntValue = chosenColor;
    std::cout << "The integer value of the chosen color is: " <<colorIntValue<< std::endl;


    return 0;
}