#include<iostream>

using namespace std;


int main(){


    cout<<"Enter List Size "<<endl;
    int n;
    cin>>n;

    int data[n];

      for(int i = 0 ; i <n ;i++){
            cout<<"Element on array "<<(i+1)<<endl;
            cin>>data[i];
        }

    //cout<<"Element on array "<<data[2]<<endl;

    //fatch all data from array 

        for(int i = 0 ; i <n ;i++){
            cout<<"Element on array "<<(i+1)<<" = "<<data[i]<<endl;
        }

    return 0;
}