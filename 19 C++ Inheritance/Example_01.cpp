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


class Amount : public Product{
    public : void Amount_info(){
        cout<<"Amount 300/- "<<endl;
    }
};
int main(){

    Amount obj;
    obj.ProductName();
    obj.client_info();
    obj.Amount_info();



    return 0;
}