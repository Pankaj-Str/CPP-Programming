
### Introduction to Classes and Objects in C++

#### Classes:
In C++, a class is a blueprint for creating objects. It defines a data structure along with methods that operate on that data. Think of a class as a user-defined data type that encapsulates data and behavior.

#### Objects:
An object is an instance of a class. It is a concrete realization of the class, created based on the blueprint provided by the class. Objects have attributes (data members) and behaviors (member functions or methods).

### Example:

Let's create a simple C++ program that demonstrates the concepts of classes and objects. Suppose we want to model a "Person" with a name and age.

```cpp
#include <iostream>
#include <string>

// Define the Person class
class Person {
public:
    // Constructor to initialize object's state
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to display information
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << " years" << std::endl;
    }

private:
    // Data members
    std::string name;
    int age;
};

int main() {
    // Create objects of the Person class
    Person person1("John Doe", 25);
    Person person2("Jane Smith", 30);

    // Access and display information using member functions
    std::cout << "Person 1 Details:" << std::endl;
    person1.displayInfo();

    std::cout << "\nPerson 2 Details:" << std::endl;
    person2.displayInfo();

    return 0;
}
```

In this example:

- We define a class `Person` with private data members `name` and `age`, and a public member function `displayInfo` to print the person's information.

- The constructor `Person(std::string n, int a)` is used to initialize the object's state when an object is created.

- In the `main` function, we create two objects of the `Person` class: `person1` and `person2`.

- We then use the `displayInfo` member function to display the information for each person.

When you run this program, you should see output similar to the following:

```
Person 1 Details:
Name: John Doe, Age: 25 years

Person 2 Details:
Name: Jane Smith, Age: 30 years
```

This is a basic example, and in real-world scenarios, classes and objects are used to model more complex systems and structures.