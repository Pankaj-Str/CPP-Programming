#include<iostream>

using namespace std;


class a_class{

    public : void getinfoA(){

        cout<<"this is a class"<<endl;
    }

};

class b_class : public a_class{

    public : void getinfoB(){

        cout<<"this is b class"<<endl;
    }

};

int main(){

    b_class objBclass; // create a object

    objBclass.getinfoA();
    objBclass.getinfoB();

    return 0;
}