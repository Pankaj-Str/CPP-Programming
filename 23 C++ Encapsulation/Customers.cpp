#include<iostream>
using namespace std;


class Customer{

    string name;
    int creditlimit;
    int age;

    public : Customer(string Name , int CreditLimit , int Age){

        name = Name;
        creditlimit = CreditLimit;
        age = Age;

    }

    public : void set_name(string Name){
        name=Name;
    }

    public : void set_age(int Age){
        age = Age;
    }
    public : void set_creditlimit(int CreditLimit){
        creditlimit = CreditLimit;
    }

    public : string get_name(){
        return name;
    }

    public : int get_creditlimit(){
        return creditlimit;
    }

    public : int get_age(){
        return age;
    }



};


int main(){

    Customer c("joy",45000,56);
    cout<<"Customer name "<<c.get_name()<<endl;
    cout<<"Customer age "<<c.get_age()<<endl;
    cout<<"Customer credit limit "<<c.get_creditlimit()<<endl;

    c.set_age(21);

    cout<<"Customer name "<<c.get_name()<<endl;
    cout<<"Customer age "<<c.get_age()<<endl;
    cout<<"Customer credit limit "<<c.get_creditlimit()<<endl;
    

    return 0;
}