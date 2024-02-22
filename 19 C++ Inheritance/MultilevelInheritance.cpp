// Multilevel Inheritance
#include<iostream>
using namespace std;
class a1_class{

    public : void getinfoA(){

        cout<<"this is a class"<<endl;
    }

};

class b2_class : public a1_class{

    public : void getinfoB(){

        cout<<"this is b class"<<endl;
    }

};

class c3_class : public b2_class{

    public : void getinfoC(){

        cout<<"this is C class"<<endl;
    }

};

int main(){

    c3_class objc3;

    objc3.getinfoC();
    objc3.getinfoB();
    objc3.getinfoA();

    return 0;
}