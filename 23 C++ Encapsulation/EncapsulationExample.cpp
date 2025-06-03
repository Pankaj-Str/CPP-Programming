#include<iostream>

using namespace std;


// create a Encapsulation class


class student
{
    // private data member
private:
    string name;
    int age;
    int rollno;

    // public member function to set values
public: void setValues(string sname, int sage, int srollno)
    {
        name = sname;
        age = sage;
        rollno = srollno;
    }

    // public member function to display values
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    student s1;
    s1.setValues("John", 23, 101);
    s1.display();

    student s2;
    s2.setValues("Doe", 25, 102);
    s2.display();

    return 0;
}