#include<iostream>

using namespace std;


class Customer {
    
    public : void CustomerInfo(string name, string address, string phone) {
        cout << "Customer Name: " << name << endl;
        cout << "Customer Address: " << address << endl;
        cout << "Customer Phone: " << phone << endl;
    }

    public : void  bill(int price,int gst){
        int gst_amount = price * gst / 100;
        int Mrp = price + gst_amount;
        cout << "Price: " << price << endl;
        cout << "GST: " << gst << "%" << endl;
        cout << "GST Amount: " << gst_amount << endl;
        cout << "MRP: " << Mrp << endl;
        cout<<"-------------------"<<endl;
    }


};

int main() {

    Customer customer;
    customer.CustomerInfo("John Doe", "1234, 5th Avenue, New York", "123-456-7890");
    customer.CustomerInfo("Joy Smith", "5678, 6th Avenue, New York", "234-567-8901");
    

    customer.bill(1200, 18);
    customer.bill(1500, 9);
    customer.bill(2000, 12);
    customer.bill(2500, 2);

    return 0;
}