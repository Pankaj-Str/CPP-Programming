#include <iostream>
using namespace std;
class Overloader {
public:
  void display(int num) {
    cout << "Integer: " << num << endl;
  }

  void display(double num) {
    cout << "Double: " << num << endl;
  }
   void display(float num) {
    cout << "float: " << num << endl;
  }
};

int main() {
  Overloader obj;
  obj.display(5);
  obj.display(3.14);
  obj.display(4.5);  
  return 0;
}
