#include <iostream>
using namespace std;

int main() {
    bool x = true, y = false;

    // Logical AND both are ture then return true
    cout << (x && y) << endl;

    // Logical OR one ture
    cout << (x || y) << endl;

    // Logical NOT
    cout << !x << endl;

    cout<< (90 != 90) <<endl; 


    // and &&

    cout<<(45 < 90 && 56 != 56)<<endl;

    // or ||

    cout<<(45 < 90 || 56 != 56)<<endl;

    return 0;
}