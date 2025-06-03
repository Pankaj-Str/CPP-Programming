### Topic: C++ Comments

#### Introduction:
Comments in C++ are essential for enhancing code readability and providing insights into the code's functionality. They are ignored by the compiler and serve as notes for developers. This tutorial covers the basics of C++ comments along with examples.

#### Single-line Comments:
Single-line comments start with `//` and extend to the end of the line. They are useful for adding brief explanations or annotations.

```cpp
// This is a single-line comment
int main() {
    // Code goes here
    return 0;
}
```

#### Multi-line Comments:
Multi-line comments begin with `/*` and end with `*/`. They are suitable for longer explanations or commenting out multiple lines of code.

```cpp
/*
    This is a multi-line comment
    It can span multiple lines
*/
int main() {
    /*
        Code goes here
    */
    return 0;
}
```

#### Example:

```cpp
#include <iostream>

// Function to add two numbers
int add(int a, int b) {
    // This is an inline comment
    return a + b;
}

int main() {
    /*
        This program demonstrates the use of comments in C++
    */

    // Input numbers
    int num1 = 5;   // First number
    int num2 = 7;   // Second number

    // Calculate the sum
    int result = add(num1, num2);

    // Output the result
    std::cout << "The sum is: " << result << std::endl;

    // Visit my website for more tutorials: https://www.codeswithpankaj.com/

    return 0;
}
```

#### Additional Resources:
- Learn more about C++ comments: [Codes with Pankaj](https://www.codeswithpankaj.com/c++-comments)

Feel free to explore more tutorials on [Codes with Pankaj](https://www.codeswithpankaj.com/) for comprehensive programming guidance.