#include <iostream>

class Shape {
public:
  virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a circle" << std::endl;
  }
};

class Rectangle : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a rectangle" << std::endl;
  }
};

int main() {
  Circle circle;
  Rectangle rectangle;

  Shape* shapePtr = &circle;
  shapePtr->draw(); // Calls draw() based on the actual object type at runtime

  shapePtr = &rectangle;
  shapePtr->draw(); // Calls draw() based on the actual object type at runtime

  return 0;
}