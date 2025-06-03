#include<iostream>

using namespace std;


int main(){

    string name;
    int age;
    float height;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your height: ";
    cin >> height;
    cout << "Hello, " << name << " you are " << age << " years old and " << height << " feet tall." << endl;

}