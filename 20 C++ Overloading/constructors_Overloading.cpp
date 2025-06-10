#include <iostream>
using namespace std;
class Rectangle {

public:
  Rectangle(int num){
    cout<<"This is Constructors 1 "<<num<<endl;
  }

  public:
  Rectangle(int num1 , int num2){
    cout<<"This is Constructors 2 "<<num1+num2<<endl;
  }

  public:
  Rectangle(string name){
    cout<<"This is Constructors 3 "<<name<<endl;
  }
};

int main() {
  Rectangle rect1(10);
  Rectangle rect2(10,34);
  Rectangle rect3("joy");


  return 0;
}