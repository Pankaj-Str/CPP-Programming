#include<iostream>

using namespace std;

class Employee{

    // employee infomation

    public: string name;
    public: int age;
    public: string company;
    public: int salary;

    // encapsulation
    public: void set_name(string Name){
        name = Name;
    }
    public: void set_age(int Age){
        age = Age;
    }
    public: void set_company(string Company){
        company = Company;
    }
    public: void set_salary(int Salary){
        salary = Salary;
    }

    public: string get_name(){
        return name;
    }
    public: int get_age(){
        return age;
    }
    public: string get_company(){
        return company;
    }
    public: int get_salary(){
        return salary;
    }

};

int main(){

    Employee emp1;

    emp1.set_name("John");
    emp1.set_age(25);
    emp1.set_company("Google");
    emp1.set_salary(100000);

    cout<<"Name: "<<emp1.get_name()<<endl;
    cout<<"Age: "<<emp1.get_age()<<endl;
    cout<<"Company: "<<emp1.get_company()<<endl;
    cout<<"Salary: "<<emp1.get_salary()<<endl;

    // update salary 

    emp1.set_salary(150000);
    cout<<"Salary: "<<emp1.get_salary()<<endl;


    return 0;
}