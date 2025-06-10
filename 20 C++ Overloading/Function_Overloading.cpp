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
  void display(string name){
    cout << "String: " << name << endl;
  }
};

int main() {
  Overloader obj;
  obj.display(5);
  obj.display(3.14);
  obj.display("Data");

  return 0;
}