#include<iostream>

using namespace std;


int main(){

    int data[3][3];

    data[0][0] = 21;
    data[1][0] = 22;
    data[2][0] = 23;

    data[0][1] = 24;
    data[1][1] = 25;
    data[2][1] = 26;

    data[0][2] = 27;
    data[1][2] = 28;
    data[2][2] = 29;

    // cout<<"Item from array : -> "<<data[0][0]<<endl;
    // cout<<"Item from array : -> "<<data[1][1]<<endl;


    for (int i = 0; i < 3; i++)
    {

        for (int a = 0; a < 3; a++)
        {
            cout<<" "<<data[i][a];
        }
        
        
        cout<<" "<<endl;
    }
    


    return 0;
}