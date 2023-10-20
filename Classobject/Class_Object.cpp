#include<iostream>
using namespace std;

class Student{

        public:void info(){
            cout<<"Name : Joy"<<endl;
        }
        public:void getaddress(){

            cout<<"Dadar West - 400068"<<endl;
        }
};
class teacher{
    public:void getname(){
        cout<<"Teacher Name : Sonu ji"<<endl;
    }
};

int main(){

    Student obj1; // create a object = classname objectname

    obj1.info();
    obj1.getaddress();

    // create a teacher class object
    teacher obj2;
    obj2.getname();


    return 0;
}
