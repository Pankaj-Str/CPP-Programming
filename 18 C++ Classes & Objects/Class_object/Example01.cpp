#include<iostream>

using namespace std;



class Student{


    public : int age;
    public : string name;

    public : Student(){
        cout<<"this is demo...."<<endl;
       
    }


    public : Student(int numbers){
        cout<<"this is number"<<numbers<<endl;
    }

    public : void info(){
        cout<<"student name is : "<<name<<endl;
        cout<<"student age is : "<<age<<endl;

    }



};




int main(){

    Student obj(456);
    Student obj1;

    
    obj.name = "joy";
    obj.age = 23;
    obj.info();



    return 0;
}