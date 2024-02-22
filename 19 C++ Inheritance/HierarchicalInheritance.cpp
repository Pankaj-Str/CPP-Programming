// Hierarchical Inheritance
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

class c3_class : public a1_class{

    public : void getinfoC(){

        cout<<"this is C class"<<endl;
    }

};

int main(){

    c3_class objc3;
    b2_class objb2;
    objc3.getinfoC();
    objc3.getinfoA();

    objb2.getinfoB();
    objb2.getinfoA();

    return 0;
}