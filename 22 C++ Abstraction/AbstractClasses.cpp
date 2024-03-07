#include <iostream>

class Shape {
public: virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:void draw() override {
    std::cout << "Drawing a circle" << std::endl;
  }
};

int main() {
  Circle circle;
  circle.draw();

  // Shape shape;  // Error: Cannot instantiate an abstract class

  return 0;
}