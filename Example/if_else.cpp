#include<iostream>
using namespace std;

int main(){

    // find smallest number among three numbers

    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a<b && a < c){
        cout << a << " is smallest number" << endl;
    }else if(b < c && b < a){
        cout << b << " is smallest number" << endl;

    }else{
        cout << c << " is smallest number" << endl;
    }

    return 0;

}