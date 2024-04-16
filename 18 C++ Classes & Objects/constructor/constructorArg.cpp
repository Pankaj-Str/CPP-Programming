#include<iostream>

using namespace std;

// create class constructor with argument

class student
{
    // print student name with constructor argument

public:student(string name)
    {
        cout << "Student name is " << name << endl;
    }
};

int main()
{
    student s1("John");
    student s2("Doe");

    return 0;
}