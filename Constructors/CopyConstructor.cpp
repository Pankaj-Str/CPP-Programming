#include <iostream>
using namespace std;

// declare a class
class Wall {
  public: double length;
  public: double height;
   
    // initialize variables with parameterized constructor
    public: Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
   // copies data of the obj parameter
   Wall(Wall &obj) {
     length = obj.length;
     height = obj.height;
   }

   double calculateArea() {
     return length * height;
   } 
   };
int main() {
 // create an object of Wall class
 Wall wall1(10.5, 8.6);

 // copy contents of wall1 to wall2
 Wall wall2 = wall1;

 // print areas of wall1 and wall2
 cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
 cout << "Area of Wall 2: " << wall2.calculateArea() << endl;;

 return 0; }