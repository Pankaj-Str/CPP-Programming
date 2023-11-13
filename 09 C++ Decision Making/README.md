# Codes with Pankaj - C++ Decision Making Depth Tutorial

Introduction:
Welcome to another installment of "Codes with Pankaj." In this tutorial, we will explore the fascinating world of decision-making in C++. Decision-making structures allow your programs to make choices based on certain conditions. Whether you are a novice or seeking to enhance your programming skills, this tutorial will cover the fundamentals of decision-making in C++, complete with examples to solidify your understanding.

### Table of Contents:

1. **Introduction to Decision Making:**
   - Explanation of the importance of decision-making in programming.
   - Overview of decision-making constructs: `if`, `else if`, `else`.

2. **If Statement:**
   - Syntax and structure of the `if` statement.
   - Example: Checking if a number is positive or negative.

```cpp
#include <iostream>

int main() {
    int number;

    std::cout << "If Statement Example:\n";
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive.\n";
    }

    return 0;
}
```

3. **If-Else Statement:**
   - Syntax and structure of the `if-else` statement.
   - Example: Determining if a number is even or odd.

```cpp
#include <iostream>

int main() {
    int number;

    std::cout << "If-Else Statement Example:\n";
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "The number is even.\n";
    } else {
        std::cout << "The number is odd.\n";
    }

    return 0;
}
```

4. **Else-If Statement:**
   - Syntax and structure of the `else if` statement.
   - Example: Classifying exam scores into grades.

```cpp
#include <iostream>

int main() {
    int score;

    std::cout << "Else-If Statement Example:\n";
    std::cout << "Enter the exam score: ";
    std::cin >> score;

    if (score >= 90) {
        std::cout << "Grade: A\n";
    } else if (score >= 80) {
        std::cout << "Grade: B\n";
    } else if (score >= 70) {
        std::cout << "Grade: C\n";
    } else {
        std::cout << "Grade: F\n";
    }

    return 0;
}
```

5. **Switch Statement:**
   - Syntax and structure of the `switch` statement.
   - Example: Displaying the day of the week.

```cpp
#include <iostream>

int main() {
    int day;

    std::cout << "Switch Statement Example:\n";
    std::cout << "Enter a day (1-7): ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Monday\n";
            break;
        case 2:
            std::cout << "Tuesday\n";
            break;
        case 3:
            std::cout << "Wednesday\n";
            break;
        case 4:
            std::cout << "Thursday\n";
            break;
        case 5:
            std::cout << "Friday\n";
            break;
        case 6:
            std::cout << "Saturday\n";
            break;
        case 7:
            std::cout << "Sunday\n";
            break;
        default:
            std::cout << "Invalid day\n";
    }

    return 0;
}
```

6. **Nested Decision Making:**
   - Explanation of nested decision-making structures.
   - Example: Combining `if` and `switch` statements.

```cpp
#include <iostream>

int main() {
    int number;

    std::cout << "Nested Decision Making Example:\n";
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "The number is positive. ";
        switch (number % 2) {
            case 0:
                std::cout << "It is even.\n";
                break;
            case 1:
                std::cout << "It is odd.\n";
                break;
        }
    } else {
        std::cout << "The number is non-positive.\n";
    }

    return 0;
}
```

7. **Conclusion:**
   - Recap of decision-making structures in C++.
   - Encouragement to practice and experiment with different scenarios.

Congratulations! You've completed the "Codes with Pankaj" C++ Decision Making Depth Tutorial. Happy coding!