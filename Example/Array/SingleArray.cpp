#include<iostream>

using namespace std;


int main(){

    int data[4];

    data[0] = 27;
    data[1] = 26;
    data[2] = 25;
    data[3] = 24;

    //cout<<"Element on array "<<data[2]<<endl;

    //fatch all data from array 

        for(int i = 0 ; i <4 ;i++){
            cout<<"Element on array "<<i<<" = "<<data[i]<<endl;
        }

    return 0;
}