#include<iostream>

using namespace std;

int main(){

    cout<<"Enter Array Size ---- "<<endl;
    int size;
    cin>>size;
    string food[size];

    
    for(int a = 0 ; a < size ; a++){
        cout<<"Enter food into Array = " <<a<<endl;
        cin>>food[a];
    }

    cout<<"-------output-------"<<endl;

    for(int a = 0 ; a < size ; a++){
        cout<<"Food : "<<a<<" = "<<food[a]<<endl;
    }


}