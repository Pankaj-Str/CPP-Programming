#include<iostream>

using namespace std;

int main(){

    // create a single array 

    int numbers[4];

    numbers[0] = 21;
    numbers[1] = 22;
    numbers[2] = 23;
    numbers[3] = 24;
    cout << "numbers[0] = " << numbers[0] << endl;  

    // acces  all elements

    for(int a = 0 ;a < 4 ; a++){

        cout << "numbers[" << a << "] = " << numbers[a] << endl;    

    }




    return 0;
}