#include<iostream>

using namespace std;

int main(){

    // Operator Arithmetic

    int a = 10;
    int b = 20;
    cout<<"a + b: "<<a+b<<endl;
    cout<<"a - b: "<<a-b<<endl;
    cout<<"a * b: "<<a*b<<endl;
    cout<<"a / b: "<<a/b<<endl;
    cout<<"a % b: "<<a%b<<endl;

    // Operator Assignment

    int c = 10;
    c += 5;
    cout<<"c += 5: "<<c<<endl;
    c -= 5;
    cout<<"c -= 5: "<<c<<endl;
    c *= 5;
    cout<<"c *= 5: "<<c<<endl;
    c /= 5;
    cout<<"c /= 5: "<<c<<endl;
    c %= 5;
    cout<<"c %= 5: "<<c<<endl;

    // Operator Comparison
    int d = 10;
    int e = 20;
    cout<<"d == e: "<<(d==e)<<endl;
    cout<<"d != e: "<<(d!=e)<<endl;
    cout<<"d > e: "<<(d>e)<<endl;
    cout<<"d < e: "<<(d<e)<<endl;
    cout<<"d >= e: "<<(d>=e)<<endl;
    cout<<"d <= e: "<<(d<=e)<<endl;

    // Operator Logical and Relational
    // leftside | rightside | result
    //   true   |   true    |  true
    //   true   |   false   |  false
    //   false  |   true    |  false
    //   false  |   false   |  false

    // Operator Logical or Relational
    // leftside | rightside | result
    //   true   |   true    |  true
    //   true   |   false   |  true
    //   false  |   true    |  true
    //   false  |   false   |  false

    bool f = true;
    bool g = false;
    cout<<"f && g: "<<(f&&g)<<endl;
    cout<<"f || g: "<<(f||g)<<endl;
    cout<<"!f: "<<!f<<endl;
    cout<<"!g: "<<!g<<endl;

     



    return 0;
}