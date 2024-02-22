// Hybrid Inheritance

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

class d4_class : public c3_class , public b2_class{

    public : void getinfod(){

        cout<<"this is d class"<<endl;
    }

};


int main(){

    // c3_class objc3;
    // b2_class objb2;
    // objc3.getinfoC();
    // objc3.getinfoA();

    // objb2.getinfoB();
    // objb2.getinfoA();

    d4_class objd4;
    objd4.getinfoB();
    objd4.getinfoC();
    objd4.getinfod();


    return 0;
}