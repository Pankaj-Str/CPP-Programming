#include<iostream>

using namespace std;

class CreditCard{

        private : string cardNumber;
        private : int cvv;
        private : string bankname;


        // using custom constructor

        public : CreditCard(string cardNumber, int cvv, string bankname){
            this->cardNumber = cardNumber;
            this->cvv = cvv;
            this->bankname = bankname;
        }

        // setter methods
        void set_cardNumber(string cardNumber){
            this->cardNumber = cardNumber;
        }

        void set_cvv(int cvv){
            this->cvv = cvv;
        }

        void set_bankname(string bankname){
            this->bankname = bankname;
        }

        // getter methods

        string get_cardNumber(){
            return this->cardNumber;
        }

        int get_cvv(){
            return this->cvv;
        }

        string get_bankname(){
            return this->bankname;
        }
};

int main(){

    CreditCard c1("123456789", 123, "HDFC");
    cout << "Card Number : " << c1.get_cardNumber() << endl;
    cout << "CVV : " << c1.get_cvv() << endl;
    cout << "Bank Name : " << c1.get_bankname() << endl;

    // update cvv number
    c1.set_cvv(456);

    cout << "Card Number : " << c1.get_cardNumber() << endl;
    cout << "CVV : " << c1.get_cvv() << endl;
    cout << "Bank Name : " << c1.get_bankname() << endl;

    return 0;

}