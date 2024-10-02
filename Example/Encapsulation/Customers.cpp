#include<iostream>

using namespace std;


// Encapsulation 


class customer{


    int creditlimit;
    string bankname;

    public : customer(int CreditLimit ,string BankName){
        creditlimit = CreditLimit;
        bankname = BankName;
    }

    public : void setcreditlimit(int CreditLimit){
        creditlimit = CreditLimit;
    }
    public : int getcreditlimit(){
        return creditlimit;
    }

    




};



int main(){

    return 0;
}