#include<iostream>

using namespace std;

    // Single Inheritance

class Client{

    public:
        void clientFunction(){
            cout << "Client Function" << endl;
        }


};

class Product : public Client{
    public:
        void productFunction(){
            cout << "Product Function" << endl;
        }

};

int main(){
    Product p;
    p.clientFunction();
    p.productFunction();
    return 0;
}