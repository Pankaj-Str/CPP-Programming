#include<iostream>

using namespace std;

class Client{

    public: string name;
    public : int age;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }    

};



int main()
{
    // create object of Client class
    Client obj1;
    obj1.name = "John";
    obj1.age = 25;
    obj1.display();

    return 0;
}