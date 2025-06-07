# Storage Classes in C++

This tutorial covers **storage classes in C++**, which define the scope, lifetime, and storage location of variables or functions. We'll explain each storage class, provide an example program, and include a practice question related to storage classes, tailored for **codeswithpankaj.com**.

---

## 1. Introduction to Storage Classes in C++

A **storage class** in C++ specifies:
- **Scope**: Where the variable is accessible (e.g., within a function, file, or program).
- **Lifetime**: How long the variable exists in memory (e.g., during a function call or the entire program).
- **Storage Location**: Whether the variable is stored in memory, registers, or elsewhere.

C++ supports the following storage classes:
1. `auto`
2. `register`
3. `static`
4. `extern`
5. `mutable` (used in classes)
6. `thread_local` (C++11 and later)

---

## 2. Types of Storage Classes

### 2.1. `auto`
- **Default** storage class for local variables.
- **Scope**: Local to the block where declared.
- **Lifetime**: Exists only within the block; destroyed when the block exits.
- **Storage**: Memory (stack).
- **Note**: Since C++11, `auto` is also used for type deduction, but as a storage class, it’s rarely used explicitly (as it’s the default).

**Example**:
```cpp
auto int x = 10; // Explicitly auto, but 'auto' is optional
```

### 2.2. `register`
- Suggests that the variable be stored in a CPU register for faster access.
- **Scope**: Local to the block where declared.
- **Lifetime**: Same as `auto` (destroyed when block exits).
- **Storage**: CPU register (if possible; otherwise, memory).
- **Note**: Modern compilers often ignore `register` and optimize automatically.

**Example**:
```cpp
register int counter = 0;
```

### 2.3. `static`
- Preserves the variable’s value even after its scope ends.
- **Scope**: Local to the block or file (if declared globally).
- **Lifetime**: Entire program duration.
- **Storage**: Memory (data segment).
- **Use**: Maintains state between function calls or restricts global variables to a file.

**Example**:
```cpp
void countCalls() {
    static int count = 0; // Retains value between calls
    count++;
    cout << "Function called " << count << " times" << endl;
}
```

### 2.4. `extern`
- Declares a variable or function defined elsewhere (e.g., another file).
- **Scope**: Global, accessible across files.
- **Lifetime**: Entire program duration.
- **Storage**: Memory (data segment).
- **Use**: Links variables/functions across multiple files.

**Example** (file1.cpp):
```cpp
int globalVar = 100; // Definition
```

(file2.cpp):
```cpp
extern int globalVar; // Declaration
cout << globalVar; // Accesses globalVar from file1.cpp
```

### 2.5. `mutable`
- Allows a member of a `const` object (in a class) to be modified.
- **Scope**: Within the class.
- **Lifetime**: Same as the object’s lifetime.
- **Use**: Useful in classes when specific members need to change despite `const` restrictions.

**Example**:
```cpp
class Example {
public:
    mutable int count; // Can be modified even in const objects
    Example() : count(0) {}
};
```

### 2.6. `thread_local` (C++11)
- Specifies that each thread has its own copy of the variable.
- **Scope**: Depends on where declared (local or global).
- **Lifetime**: Entire thread duration.
- **Storage**: Thread storage.
- **Use**: For thread-specific data.

**Example**:
```cpp
thread_local int threadVar = 0; // Each thread gets its own copy
```

---

## 3. Example Program

Below is a C++ program demonstrating `auto`, `static`, `register`, and `extern` storage classes.

```cpp
#include <iostream>
using namespace std;

// Global variable with extern potential
int globalVar = 100;

void demonstrateStatic() {
    static int count = 0; // Static variable retains value
    count++;
    cout << "Static count: " << count << endl;
}

int main() {
    // auto (default for local variables)
    auto int x = 10; // 'auto' is optional
    cout << "Auto variable: " << x << endl;

    // register
    register int counter = 5;
    cout << "Register variable: " << counter << endl;

    // static
    demonstrateStatic(); // Output: Static count: 1
    demonstrateStatic(); // Output: Static count: 2

    // extern (globalVar is defined above)
    extern int globalVar;
    cout << "Extern variable: " << globalVar << endl;

    return 0;
}
```

### Sample Output
```
Auto variable: 10
Register variable: 5
Static count: 1
Static count: 2
Extern variable: 100
```

### Explanation
- `auto`: `x` is a local variable, destroyed when `main` exits.
- `register`: `counter` is suggested to be stored in a register (compiler decides).
- `static`: `count` in `demonstrateStatic` retains its value between calls.
- `extern`: `globalVar` is accessible globally and can be linked across files.

---

## 4. Key Points
- **Default Initialization**:
  - Global/static variables: Initialized to `0`.
  - Local variables (`auto`, `register`): Uninitialized (contain garbage values).
- **Choosing a Storage Class**:
  - Use `static` for persistent state or file-scoped globals.
  - Use `extern` for sharing variables across files.
  - Use `mutable` for class members that need modification in `const` contexts.
  - Use `thread_local` for thread-specific data.
- **Avoid Overusing `register`**: Modern compilers optimize better than manual hints.

---

## 5. Practice Question (codeswithpankaj.com)

**Question**: Write a C++ program to track the number of times a function `printMessage` is called across multiple calls in a program. The function should:
- Take a string message as input from the user.
- Use a `static` variable to count the number of calls.
- Display the message and the call count each time.
Additionally, declare a global variable `totalCalls` with `extern` linkage, update it in `printMessage`, and display it in `main`.

**Sample Output**:
```
Enter a message: Hello
Message: Hello, Call count: 1
Enter a message: World
Message: World, Call count: 2
Total calls in main: 2
```

**Instructions**:
- Use a `static` variable inside `printMessage`.
- Use `getline` for string input to handle spaces.
- Share your solution at **codeswithpankaj.com**!

**Sample Solution** (Try writing your own first!):
```cpp
#include <iostream>
#include <string>
using namespace std;

// Global variable with extern linkage
int totalCalls = 0;

void printMessage() {
    static int count = 0; // Static variable to track calls
    string message;
    cout << "Enter a message: ";
    getline(cin, message);
    count++;
    totalCalls = count;
    cout << "Message: " << message << ", Call count: " << count << endl;
}

int main() {
    printMessage(); // First call
    printMessage(); // Second call
    cout << "Total calls in main: " << totalCalls << endl;
    return 0;
}
```

---

## 6. Conclusion

Storage classes in C++ (`auto`, `register`, `static`, `extern`, `mutable`, `thread_local`) control the scope, lifetime, and storage of variables. Understanding their use is crucial for managing variable behavior in complex programs. Practice with the question above to master storage classes!

For more C++ tutorials and coding challenges, visit **codeswithpankaj.com**!

---