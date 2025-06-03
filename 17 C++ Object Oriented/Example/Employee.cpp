#include<iostream>

using namespace std;    



class Employee
{

        string name = "Rahul";
        int id = 101;
        double salary = 10000;

        public : void getdata(){

            cout<<" Your name is : "<<name<<endl;
            cout<<" Your id is : "<<id<<endl;
            cout<<" Your salary is : "<<salary<<endl;

        }

};

int main(){
    // creting object of Employee class
    // className objectName;
    Employee e1;
    // calling the getdata function
    // objectName.functionName();
    e1.getdata();

    return 0;
}
