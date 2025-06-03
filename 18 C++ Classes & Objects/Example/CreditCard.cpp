#include<iostream>

using namespace std;


class CreditCard
{

          public :  string BankName;
          public :   long CardNumber;
          public :  string CardHolderName;
          public :  int ExpiryMonth;
          public : double CreditLimit;

            public : void get_CardDetails()
            {
                cout<< "Bank Name: "<< BankName<< endl;
                cout<< "Card Number: "<< CardNumber<< endl;
                cout<< "Card Holder Name: "<< CardHolderName<< endl;
                cout<< "Expiry Month: "<< ExpiryMonth<< endl;
                cout<< "Credit Limit: "<< CreditLimit<< endl;
            
            }

};

int main()
{
    // creating object of CreditCard class
    // className objectName;
    CreditCard c1;

    // assigning values to the data members

    c1.BankName = "HDFC";
    c1.CardNumber = 1234567890;
    c1.CardHolderName = "Rahul";
    c1.ExpiryMonth = 12;
    c1.CreditLimit = 100000;
    // calling the get_CardDetails function
    // objectName.functionName();
    c1.get_CardDetails();

    return 0;
}
