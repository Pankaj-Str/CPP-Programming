#include<iostream>

using namespace std;



class   books{

    string name;
    int price;

    public : void setname(string BookName){
        name = BookName;
    }

     public :  void setprice(int bookprice){

        price = bookprice;
    }

     public :  string getname(){
        return name;
    }

     public : int getprice(){
        return price;
    }


};


int main(){

    books obj;
    obj.setname("c++ programming");
    obj.setprice(1200);
    cout<<"books price : "<<obj.getprice()<<endl;
    cout<<"books price : "<<obj.getprice()<<endl;

    return 0;
}