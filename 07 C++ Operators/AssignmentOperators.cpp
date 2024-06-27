#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Simple assignment
    int c = a;
    cout << "c: " << c << endl;

    // Addition assignment
    // a = a + b
    a += b;
    cout << "a: " << a << endl;

    // Subtraction assignment
    // a = a - b
    a -= b;
    cout << "a: " << a << endl;

    // Multiplication assignment
    // a = a * b
    a *= b;
    cout << "a: " << a << endl;

    // Division assignment
    // a = a / b
    a /= b;
    cout << "a: " << a << endl;

    // Modulus assignment
    // a = a % b
    a %= b;
    cout << "a: " << a << endl;

    return 0;
}