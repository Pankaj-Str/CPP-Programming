#include<iostream>

using namespace std;

class Student{

    // create a Constructor

    public : Student(){
        cout<<"Student Info"<<endl;
    }

    public : void getinfo(){
        cout<<"My Name is : nishant "<<endl;
    }

};

int main(){

    Student obj;
    obj.getinfo();

    return 0;
}