#include<iostream>

using namespace std;

class Client{
    public : void client_info(){
        cout<<"Clinet Name : Joy"<<endl;
    }
};

class Product : public Client{
    public : void ProductName(){
        cout<<"Product Name : Books"<<endl;
    }
};



int main(){

    Product obj;
    obj.ProductName();
    obj.client_info();



    return 0;
}