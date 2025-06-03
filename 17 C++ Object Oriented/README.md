# C++ Object-Oriented Programming (OOP): A Comprehensive Guide

Welcome to the comprehensive guide to Object-Oriented Programming (OOP) in C++. Object-Oriented Programming is a powerful paradigm that facilitates modular, reusable, and organized code. In this tutorial, we'll cover the core concepts of OOP in C++, providing explanations and examples to help you grasp the principles and apply them to your programming endeavors.

## Table of Contents
- [C++ Object-Oriented Programming (OOP): A Comprehensive Guide](#c-object-oriented-programming-oop-a-comprehensive-guide)
  - [Table of Contents](#table-of-contents)
  - [1. Introduction to Object-Oriented Programming ](#1-introduction-to-object-oriented-programming-)
  - [2. Classes and Objects ](#2-classes-and-objects-)
  - [3. Encapsulation ](#3-encapsulation-)
  - [4. Inheritance ](#4-inheritance-)
  - [5. Polymorphism ](#5-polymorphism-)
  - [6. Abstraction ](#6-abstraction-)
  - [7. Static Members ](#7-static-members-)
  - [8. Operator Overloading ](#8-operator-overloading-)
  - [9. Friend Functions ](#9-friend-functions-)
  - [10. Object-Oriented Design Principles \<a name="object](#10-object-oriented-design-principles-a-nameobject)
  - [11. Practical Example ](#11-practical-example-)
  - [12. Conclusion ](#12-conclusion-)

## 1. Introduction to Object-Oriented Programming <a name="introduction"></a>

Object-Oriented Programming is a programming paradigm that revolves around the concept of "objects," which encapsulate data and behavior. The four pillars of OOP are encapsulation, inheritance, polymorphism, and abstraction.

## 2. Classes and Objects <a name="classes-and-objects"></a>

A class is a blueprint for creating objects, and objects are instances of a class. Classes define the properties (attributes) and methods (functions) that objects of that type will have.

```cpp
#include <iostream>

// Class definition
class Car {
public:
    // Properties
    std::string brand;
    int year;

    // Method
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    // Object creation
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2022;

    // Method invocation
    myCar.displayInfo();

    // ... (rest of the code)
}
```

## 3. Encapsulation <a name="encapsulation"></a>

Encapsulation involves bundling the data (attributes) and methods that operate on the data within a single unit, known as a class. Access specifiers (`public`, `private`, `protected`) control the visibility of members.

```cpp
class BankAccount {
private:
    // Private members
    double balance;

public:
    // Public members
    void deposit(double amount) {
        // Deposit logic
        balance += amount;
    }

    void withdraw(double amount) {
        // Withdrawal logic
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }
};
```

## 4. Inheritance <a name="inheritance"></a>

Inheritance allows a class to inherit properties and behaviors from another class. The base class (parent) provides a common interface, and the derived class (child) extends or modifies it.

```cpp
// Base class
class Shape {
public:
    // Common interface
    virtual double area() const = 0;
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implementation of the area method
    double area() const override {
        return 3.14 * radius * radius;
    }
};
```

## 5. Polymorphism <a name="polymorphism"></a>

Polymorphism allows objects to be treated as instances of their base class, even when they are instances of derived classes. It enables flexibility and extensibility in the code.

```cpp
void printArea(const Shape& shape) {
    std::cout << "Area: " << shape.area() << std::endl;
}

// Usage
Circle circle(5.0);
printArea(circle);
```

## 6. Abstraction <a name="abstraction"></a>

Abstraction involves hiding the complex implementation details and exposing only the essential features. Abstract classes and pure virtual functions are key components of abstraction.

```cpp
// Abstract class
class AbstractShape {
public:
    // Pure virtual function
    virtual double area() const = 0;
};

// Derived class implementing the abstract function
class Square : public AbstractShape {
private:
    double side;

public:
    // Constructor
    Square(double s) : side(s) {}

    // Implementation of the area method
    double area() const override {
        return side * side;
    }
};
```

## 7. Static Members <a name="static-members"></a>

Static members belong to the class rather than instances of the class. They are shared among all objects of the class.

```cpp
class MathOperations {
public:
    // Static method
    static double add(double a, double b) {
        return a + b;
    }

    // Static member variable
    static const double pi;
};

// Initialization of static member outside the class
const double MathOperations::pi = 3.14;
```

## 8. Operator Overloading <a name="operator-overloading"></a>

Operator overloading allows defining custom behavior for operators when used with user-defined types.

```cpp
class Complex {
private:
    double real;
    double imag;

public:
    // Overloading the + operator
    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }
};
```

## 9. Friend Functions <a name="friend-functions"></a>

Friend functions are non-member functions that have access to the private and protected members of a class.

```cpp
class MyClass {
private:
    int data;

    // Friend function declaration
    friend void accessPrivateData(const MyClass& obj);

public:
    // Constructor
    MyClass(int d) : data(d) {}
};

// Friend function definition
void accessPrivateData(const MyClass& obj) {
    std::cout << "Private data: " << obj.data << std::endl;
}
```

## 10. Object-Oriented Design Principles <a name="object

-oriented-design-principles"></a>

Explore principles like SOLID (Single Responsibility, Open/Closed, Liskov Substitution, Interface Segregation, Dependency Inversion) for effective and scalable object-oriented design.

## 11. Practical Example <a name="practical-example"></a>

Let's apply our knowledge to a practical example: a program that models a library system using classes, encapsulation, and inheritance.

```cpp
#include <iostream>
#include <vector>

// Base class
class Item {
protected:
    std::string title;

public:
    // Constructor
    Item(const std::string& t) : title(t) {}

    // Virtual function
    virtual void displayInfo() const = 0;
};

// Derived class
class Book : public Item {
private:
    std::string author;

public:
    // Constructor
    Book(const std::string& t, const std::string& a) : Item(t), author(a) {}

    // Implementation of the displayInfo method
    void displayInfo() const override {
        std::cout << "Book Title: " << title << ", Author: " << author << std::endl;
    }
};

// Usage
int main() {
    std::vector<Item*> library;

    // Creating objects
    Book book1("The Catcher in the Rye", "J.D. Salinger");
    Book book2("To Kill a Mockingbird", "Harper Lee");

    // Adding objects to the library
    library.push_back(&book1);
    library.push_back(&book2);

    // Displaying information
    for (const auto& item : library) {
        item->displayInfo();
    }

    // ... (rest of the code)
}
```

## 12. Conclusion <a name="conclusion"></a>

Congratulations! You've now explored the world of Object-Oriented Programming in C++. Understanding and applying OOP principles can significantly enhance the structure, flexibility, and maintainability of your code.

For more programming tutorials and resources, visit [codeswithpankaj.com](https://codeswithpankaj.com). Happy coding!