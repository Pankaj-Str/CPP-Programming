#include<iostream>

using namespace std;

class Customers
{
public: void Customer_info(){
    cout<<"Nishant : "<<endl;
}
};

class creditcard : public Customers{

    public: void creditcard_number(){
        cout<<"1234567890123456"<<endl;
    }

};

int main(){

    creditcard obj;
    obj.Customer_info();
    obj.creditcard_number();

    return 0;
}




