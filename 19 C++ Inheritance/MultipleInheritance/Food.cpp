#include<iostream>

using namespace std;

    // Multiple Inheritance

class Food{
    public:
        void foodFunction(){
            cout << "Food Function" << endl;
        }
};

class Client{
    public:
        void clientFunction(){
            cout << "Client Function" << endl;
        }
};

class Product : public Food , public Client{
    public:
        void productFunction(){
            cout << "Product Function" << endl;
        }
};

int main(){
    Product p;
    p.foodFunction();
    p.clientFunction();
    p.productFunction();
    return 0;
}