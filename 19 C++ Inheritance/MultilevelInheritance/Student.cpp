#include<iostream>

using namespace std;

    // Multilevel Inheritance

class Person{
    public:
        void personFunction(){
            cout << "Person Function" << endl;
        }
};

class Student : public Person{
    public:
        void studentFunction(){
            cout << "Student Function" << endl;
        }
};

class CollegeStudent : public Student{
    public:
        void collegeStudentFunction(){
            cout << "College Student Function" << endl;
        }
};

int main(){
    CollegeStudent cs;
    cs.personFunction();
    cs.studentFunction();
    cs.collegeStudentFunction();
    return 0;
}