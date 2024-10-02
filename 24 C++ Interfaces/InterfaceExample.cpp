// Demonstrate the working of Data Abstraction
#include <iostream>
using namespace std;
class implementAbstraction
{
private:
 int A, B;
public:
 // method to set values of
 // private members
 void set(int x, int y)
 {
 A = x;
 B = y;
 }
 void display()
 {
 cout << "A = " << A << endl;
 cout << "B = " << B << endl;
 }
};
int main()
{
 implementAbstraction obj;
 obj.set(20, 30);
 obj.display();
 return 0;
}
