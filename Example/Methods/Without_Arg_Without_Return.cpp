#include<iostream>

using namespace std;

class CreditCard {

    public : void CardInfo() {
        cout << "Card Number: 1234 5678 9101 1121" << endl;
        cout << "Card Holder: John Doe" << endl;
        cout << "Card Type: MasterCard" << endl;
        cout << "Card Expiry: 12/2022" << endl;
    }
    public : void CustomerInfo() {
        cout << "Customer Name: John Doe" << endl;
        cout << "Customer Address: 1234, 5th Avenue, New York" << endl;
        cout << "Customer Phone: 123-456-7890" << endl;
        }

};

int main() {

    CreditCard card;
    card.CardInfo();
    // call multiple times
    card.CardInfo();
    card.CustomerInfo();

    return 0;
}