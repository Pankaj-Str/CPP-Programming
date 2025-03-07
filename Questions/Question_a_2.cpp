// write a program to find  whether a given character is a vowel or not.
#include <iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // convert to lower case
    ch = tolower(ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is a vowel." << endl;
    }else{
        cout << ch << " is a not vawel." << endl;
    }

    return 0;
}