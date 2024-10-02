
// C++ program to implement an Interface
#include <iostream>
#include <string>
using namespace std;
// Interface(Abstract class
// with pure virtual function)
class Scholar
{
public:
 virtual string returnString() = 0;
};
class child : public Scholar
{
public:
 string returnString()
 {
 return "ScholarHat";
 }
};
int main()
{
 child childObj;
 Scholar* ptr;
 ptr = &childObj;
 cout << ptr->returnString();
 return 0;
}
