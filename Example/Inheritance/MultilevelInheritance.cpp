#include<iostream>

using namespace std;

class client{

    public: void client_info(){
        cout<<"Client Name: Nishant"<<endl;
    }

};


class  bank_account : public client{

    public : void account_info(){
        cout<<"Account Number: 1234567890"<<endl;

    }

};

class credit_amount : public  bank_account{

    public : void  credit_amount_info(){
        cout<<"Credit Amount: $1000"<<endl;
    }

};


int main(){
    credit_amount obj;
    obj.client_info();
    obj.account_info();
    obj.credit_amount_info();
    return 0;
}



