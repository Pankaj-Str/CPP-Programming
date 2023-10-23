#include<iostream>
using namespace std;

class books{

    public:void GetBookInfo(){
        cout<<"Welcome to Codes With Pankaj"<<endl;
    }

    public : void GetName(string name){
        cout<<"Book Name : "<<name<<endl;
    }

};

int main(){

    // create a object
    books obj_books;
    obj_books.GetBookInfo();
    obj_books.GetName("C++ Developemnt");

    return 0;
}