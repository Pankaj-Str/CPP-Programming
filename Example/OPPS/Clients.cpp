#include<iostream>
using namespace std;

class foods{

   public : string foodName = "Burger";
    int price = 100;

    public : void getFood(){
        cout << "Food Name: " << foodName << endl;
        cout << "Price: " << price << endl;
    }

};

int main(){
    // create a class object
    foods f;
    f.getFood();

    // set value into variable 
    f.foodName = "Pizza";
    f.price = 200;

    // get value from variable
    f.getFood();

    return 0;

}