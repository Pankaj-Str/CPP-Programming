#include<iostream>

using namespace std;

class School{

    // create a Constructor

    public : School(string name){
        cout<<"School Name : "<<name<<endl;
    }

    public : void getSchoolAddress(){
        cout<<"Andheri West"<<endl;
    }

};

int main(){

    School obj("PVS");
    School obj1("AVS");
    obj.getSchoolAddress();

    return 0;
}