#include<iostream>

using namespace std;


class Employee{

    public : void Employee_info(){
        cout <<"Employee Information"<< endl;
        cout <<"Name: John Doe"<<endl;
        cout <<"Age: 30"<<endl;
        cout <<"Salary: 1000"<<endl;
    }

};

int main(){
    // create object of Employee class
    Employee emp; // className objectName;
    emp.Employee_info();
}