#include<iostream>

using namespace std;


// create class constructor with default value

class student
{
public:student()
    {
        cout << "Constructor is called" << endl;
        
    }

   void display()
    {
        cout << "Hello World" << endl;
    } 
};

int main()
{
    student s1;
    s1.display();

    return 0;
}