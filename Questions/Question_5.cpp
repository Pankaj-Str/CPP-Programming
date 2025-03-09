#include<iostream>
using namespace std;
int main(){

    int matrix[3][3];
    // adding data row wise
    matrix[0][0] = 21;
    matrix[0][1] = 22;
    matrix[0][2] = 23;
    matrix[1][0] = 24;
    matrix[1][1] = 25;
    matrix[1][2] = 26;
    matrix[2][0] = 27;
    matrix[2][1] = 28;
    matrix[2][2] = 29;
    // printing data row wise
    //cout<< matrix[1][2] << endl; // output is 26

    // for(int i = 0 ; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         //cout<< matrix[i][j] << " "; // print the data of the matrix
    //         cout<<j<<i<<" "; // print the index of the matrix
    //     }
    //     cout<< endl;
    // }


    // using while loop 

    int i = 0;
    while(i <3){
            int j = 0;
            while(j < 3){
                cout<< matrix[i][j] << " ";
                j++;
            }
        cout<< endl;
        i++;
    }

    return 0;
}