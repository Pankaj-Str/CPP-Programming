#include<iostream>
using namespace std;
class customers{

    public : void info(){
        cout<<"Custromers name : joy "<<endl;
    }

};
class orders : public customers{

    public : void info(){
        cout<<"order name : foods "<<endl;
        cout<<"order price : 300/- "<<endl;
    }

};

int main(){
    customers* customersPointer;
    orders  orderObj;

    customersPointer = &orderObj;
    customersPointer->info();

    orderObj.info();

}
