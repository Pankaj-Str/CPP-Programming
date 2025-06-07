


user input in c++

introduction

In C++, you can take input from users using the cin object, which stands for console input. It is part of the iostream library.


---

basic syntax of cin

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age;
    return 0;
}

Explanation:

cin >> age; takes input from the user and stores it in the variable age.

cout is used to display output.



---

multiple inputs

You can take multiple inputs in one line using cin.

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum is: " << x + y;
    return 0;
}


---

take input for different data types

You can use cin to take input of int, float, double, char, and string.

#include <iostream>
using namespace std;

int main() {
    int id;
    float marks;
    char grade;
    string name;

    cout << "Enter student ID: ";
    cin >> id;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter grade: ";
    cin >> grade;

    cout << "Enter name: ";
    cin >> name;  // This takes only first word

    cout << "ID: " << id << "\n";
    cout << "Marks: " << marks << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Name: " << name << "\n";

    return 0;
}

Note:
To take full line input for string, use getline().


---

use getline() for string input

#include <iostream>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName;
    return 0;
}

Important:
If you use cin before getline, add an extra cin.ignore(); to avoid newline issues.


---

example: calculate area of rectangle

#include <iostream>
using namespace std;

int main() {
    float length, width;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    float area = length * width;
    cout << "Area = " << area;

    return 0;
}


---

common issues with user input

1. cin only reads until space for strings.


2. Mixing cin and getline needs cin.ignore().


3. Wrong data type input can cause errors or undefined behavior.




---

practice questions - user input in c++

1. Write a program to take name, age, and salary of an employee and display them.


2. Take two integers as input and print their difference.


3. Take radius of a circle as input and calculate area.


4. Take a character as input and print whether it is a vowel or consonant.


5. Create a calculator using switch case that takes input from the user.




---

for more beginner-friendly tutorials, visit codeswithpankaj.com

