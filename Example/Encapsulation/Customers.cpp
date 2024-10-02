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

    public : void setbankname(string BankName){
        bankname = BankName;
    }
    public : string getbankname(){
        return bankname;
    }
};



int main(){

    customer objcustomer(45000,"SBI");
    cout<<"Credit Limit : "<<objcustomer.getcreditlimit()<<endl;
    cout<<"Bank Name : "<<objcustomer.getbankname()<<endl;

    objcustomer.setbankname("HDFC");
    objcustomer.setcreditlimit(50000);
    cout<<"Credit Limit : "<<objcustomer.getcreditlimit()<<endl;
    cout<<"Bank Name : "<<objcustomer.getbankname()<<endl;
    

    return 0;
}