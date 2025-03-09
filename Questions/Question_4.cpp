#include<iostream>
using namespace std;
int main(){

    int x , y , z;
    x = 5;
    y = 6;
    z = (++x) + y;  // x becomes 6 , so z = 6 + 6 = 12
    y = y + x++;  // x is 6 so y = 6 + 6 = 12 and then x becomes 7
    y++; // y becomes 13
    cout<< y << endl;  // output is 13
    cout<< z << endl; // output is 12

    return 0;
}