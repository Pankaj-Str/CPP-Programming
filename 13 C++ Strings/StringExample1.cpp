#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    
    // Input
    cout<< "Enter your name: ";
    getline(cin, userInput);  // getline(cin,variable)

    // Output
    cout << "Hello, " << userInput << "!" << endl;

    
}