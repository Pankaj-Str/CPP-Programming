#include <iostream>
using namespace std;

class client {
public:
    int x;
    client(){

    };
  
  	// Copy Constructor definition
    client (client& obj) {
        x = obj.x;
      	cout << "Copy constructor "
      	        "called" << endl;
    }
};

int main() {
  
  	// Creating an object of
  	// class A
    client obj1;
    obj1.x = 10;
    cout << "obj1's x = " << obj1.x << endl;

    // Creating another object by
    // copying already created object
    client obj2(obj1);
    cout << "obj2's x = " << obj2.x;
    return 0;
}