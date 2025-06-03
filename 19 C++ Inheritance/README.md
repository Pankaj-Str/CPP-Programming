# Understanding C++ Inheritance

## Introduction

Welcome to an in-depth tutorial on C++ inheritance! Inheritance is a powerful feature in C++ that allows you to create a new class by reusing properties and behaviors of an existing class. This concept is fundamental to object-oriented programming (OOP) and promotes code reusability, extensibility, and maintainability. In this tutorial, we will explore the different types of inheritance in C++ with suitable examples to help you grasp the concept effectively.

Before we dive in, make sure to check out more tutorials and resources on C++ and other programming topics at [Codes with Pankaj](http://www.codeswithpankaj.com).

## Table of Contents

- [Understanding C++ Inheritance](#understanding-c-inheritance)
  - [Introduction](#introduction)
  - [Table of Contents](#table-of-contents)
  - [Basics of Inheritance](#basics-of-inheritance)
  - [Types of Inheritance](#types-of-inheritance)
    - [Single Inheritance](#single-inheritance)
    - [Multiple Inheritance](#multiple-inheritance)
    - [Multilevel Inheritance](#multilevel-inheritance)
    - [Hierarchical Inheritance](#hierarchical-inheritance)
    - [Hybrid Inheritance](#hybrid-inheritance)
  - [Example: Single Inheritance](#example-single-inheritance)
  - [Example: Multiple Inheritance](#example-multiple-inheritance)
  - [Example: Multilevel Inheritance](#example-multilevel-inheritance)
  - [Example: Hierarchical Inheritance](#example-hierarchical-inheritance)
  - [Example: Hybrid Inheritance](#example-hybrid-inheritance)
  - [Conclusion](#conclusion)

## Basics of Inheritance

Inheritance in C++ allows a class (called the **derived class**) to inherit properties and behaviors from another class (called the **base class**). This facilitates the creation of a hierarchy of classes, where a derived class can reuse and extend the functionalities of its base class.

To derive a class in C++, we use the `class` keyword followed by a colon and the access specifier (public, private, or protected) and the name of the base class.

```cpp
class BaseClass {
  // Base class members
};

class DerivedClass : access-specifier BaseClass {
  // Derived class members
};
```

## Types of Inheritance

### Single Inheritance

In single inheritance, a class is derived from only one base class. This is the simplest form of inheritance.

```cpp
class Base {
  // Base class members
};

class Derived : public Base {
  // Derived class members
};
```

### Multiple Inheritance

Multiple inheritance involves a class deriving from more than one base class. This can lead to complex class hierarchies.

```cpp
class Base1 {
  // Base1 class members
};

class Base2 {
  // Base2 class members
};

class Derived : public Base1, public Base2 {
  // Derived class members
};
```

### Multilevel Inheritance

In multilevel inheritance, a class is derived from another derived class. This creates a chain of inheritance.

```cpp
class Grandparent {
  // Grandparent class members
};

class Parent : public Grandparent {
  // Parent class members
};

class Child : public Parent {
  // Child class members
};
```

### Hierarchical Inheritance

In hierarchical inheritance, multiple classes are derived from a single base class. This forms a tree-like structure.

```cpp
class Base {
  // Base class members
};

class Derived1 : public Base {
  // Derived1 class members
};

class Derived2 : public Base {
  // Derived2 class members
};
```

### Hybrid Inheritance

Hybrid inheritance is a combination of any two or more types of inheritance mentioned above. It can involve multiple base classes and derived classes.

## Example: Single Inheritance

Let's consider a simple example of single inheritance:

```cpp
#include <iostream>

class Shape {
public:
  void setWidth(int w) {
    width = w;
  }

  void setHeight(int h) {
    height = h;
  }

protected:
  int width;
  int height;
};

class Rectangle : public Shape {
public:
  int getArea() {
    return (width * height);
  }
};

int main() {
  Rectangle rect;
  rect.setWidth(5);
  rect.setHeight(8);

  std::cout << "Area of the rectangle: " << rect.getArea() << std::endl;

  return 0;
}
```

This example demonstrates a `Shape` base class with `Rectangle` inheriting from it. The `Rectangle` class can access the `width` and `height` attributes of the `Shape` class.

## Example: Multiple Inheritance

Consider a scenario where a class inherits from multiple base classes:

```cpp
#include <iostream>

class A {
public:
  void displayA() {
    std::cout << "Class A" << std::endl;
  }
};

class B {
public:
  void displayB() {
    std::cout << "Class B" << std::endl;
  }
};

class C : public A, public B {
public:
  void displayC() {
    std::cout << "Class C" << std::endl;
  }
};

int main() {
  C obj;
  obj.displayA();
  obj.displayB();
  obj.displayC();

  return 0;
}
```

In this example, class `C` inherits from both class `A` and class `B`. The object of class `C` can access the functionalities of both base classes.

## Example: Multilevel Inheritance

Now, let's explore multilevel inheritance:

```cpp
#include <iostream>

class Vehicle {
public:
  void start() {
    std::cout << "Vehicle started" << std::endl;
  }
};

class Car : public Vehicle {
public:
  void accelerate() {
    std::cout << "Car accelerating" << std::endl;
  }
};

class SportsCar : public Car {
public:
  void turboBoost() {
    std::cout << "SportsCar turbo boost activated" << std::endl;
  }
};

int main() {
  SportsCar myCar;
  myCar.start();
  myCar.accelerate();
  myCar.turboBoost();

  return 0;
}
```

In this example, `SportsCar` is derived from `Car`, which is in turn derived from `Vehicle`. The `SportsCar` class inherits functionalities from both the `Car` and `Vehicle` classes.

## Example: Hierarchical Inheritance

Let's consider a hierarchical inheritance scenario:

```cpp
#include <iostream>

class Animal {
public:
  void eat() {
    std::cout << "Animal eating" << std::endl;
  }
};

class Mammal : public Animal {
public:
  void giveBirth() {
    std::cout << "Mammal giving birth" << std::endl;
  }
};

class Bird : public Animal {
public:
  void layEggs() {
    std::cout << "Bird laying eggs" << std::endl;
  }
};

int main() {
  Mammal dog;
  Bird sparrow;

  dog.eat();
  dog.giveBirth();

  sparrow.eat();
  sparrow.layEggs();

  return 0;
}
```

In this example, `Mammal` and `Bird` are both

 derived from the `Animal` base class. This represents a hierarchical inheritance structure.

## Example: Hybrid Inheritance

Hybrid inheritance involves a combination of inheritance types. Let's create an example with multiple base and derived classes:

```cpp
#include <iostream>

class A {
public:
  void displayA() {
    std::cout << "Class A" << std::endl;
  }
};

class B {
public:
  void displayB() {
    std::cout << "Class B" << std::endl;
  }
};

class C : public A, public B {
public:
  void displayC() {
    std::cout << "Class C" << std::endl;
  }
};

class D : public C {
public:
  void displayD() {
    std::cout << "Class D" << std::endl;
  }
};

int main() {
  D obj;
  obj.displayA();
  obj.displayB();
  obj.displayC();
  obj.displayD();

  return 0;
}
```

Here, `C` is derived from both `A` and `B`, and `D` is derived from `C`. This demonstrates a hybrid inheritance scenario.

## Conclusion

C++ inheritance is a powerful feature that allows you to create well-structured and reusable code. Understanding the different types of inheritance and when to use them is crucial for designing effective and maintainable class hierarchies. I hope this comprehensive guide and examples have helped you grasp the concepts of C++ inheritance.

For more tutorials and resources on C++ and programming, be sure to visit [Codes with Pankaj](http://www.codeswithpankaj.com). Happy coding!