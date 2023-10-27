#include<iostream>
using namespace std;

class Orders{
    public : void order_info(){
        cout<<"Foods Orders - Smaosa"<<endl;
    }

};
class Amounts : public Orders{
    public : void amount_info(){
        cout<<"300/-"<<endl;
    }
};

int main(){

    Amounts amounts_obj;
    
    amounts_obj.order_info();
    amounts_obj.amount_info();

    return 0;
}
