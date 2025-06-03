#include<iostream>

using namespace std;

    // Hierarchical Inheritance 


class car{
    public:
        void carFunction(){
            cout << "Car Function" << endl;
        }
};    

class bike : public car{
    public:
        void bikeFunction(){
            cout << "Bike Function" << endl;
        }
};

class truck : public car{
    public:
        void truckFunction(){
            cout << "Truck Function" << endl;
        }
};

int main(){
    bike b;
    truck t;
    b.carFunction();
    b.bikeFunction();
    t.carFunction();
    t.truckFunction();
    return 0;
}