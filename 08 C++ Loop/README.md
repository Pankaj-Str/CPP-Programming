# Loops in C++


---

## 1. Introduction to Loops in C++

Loops in C++ enable repeated execution of a code block based on a condition or iteration over a collection. They are fundamental for tasks like processing lists, performing calculations, or validating input.

### Key Concepts:
- **Iteration**: One execution of the loop’s code block.
- **Condition**: A boolean expression that controls loop continuation.
- **Loop Body**: The code executed in each iteration.
- **Types**: C++ supports `for`, `while`, `do-while`, and range-based `for` loops.

Loops covered:
1. For Loop
2. While Loop
3. Do-While Loop
4. Range-Based For Loop (Foreach)

---

## 2. Types of Loops in C++

### 2.1. For Loop
The **for loop** is ideal when the number of iterations is known. It combines initialization, condition, and update in a single line.

**Syntax**:
```cpp
for (initialization; condition; update) {
    // Loop body
}
```
- **Initialization**: Sets the loop variable (e.g., `int i = 0`).
- **Condition**: Evaluated before each iteration (e.g., `i < n`).
- **Update**: Modifies the loop variable after each iteration (e.g., `i++`).

**Example**:
```cpp
for (int i = 1; i <= 5; i++) {
    cout << i << " "; // Outputs: 1 2 3 4 5
}
```

### 2.2. While Loop
The **while loop** executes as long as a condition is true, suitable when the number of iterations is unknown.

**Syntax**:
```cpp
while (condition) {
    // Loop body
}
```
- **Condition**: Checked before each iteration.
- **Note**: Ensure the condition becomes false to avoid infinite loops.

**Example**:
```cpp
int i = 1;
while (i <= 5) {
    cout << i << " "; // Outputs: 1 2 3 4 5
    i++;
}
```

### 2.3. Do-While Loop
The **do-while loop** executes the loop body at least once, checking the condition afterward.

**Syntax**:
```cpp
do {
    // Loop body
} while (condition);
```
- **Condition**: Evaluated after each iteration.
- **Note**: Guarantees at least one execution.

**Example**:
```cpp
int i = 1;
do {
    cout << i << " "; // Outputs: 1 2 3 4 5
    i++;
} while (i <= 5);
```

### 2.4. Range-Based For Loop (Foreach)
The **range-based for loop** (C++11) iterates over elements in a container (e.g., array, vector) without explicit indexing.

**Syntax**:
```cpp
for (type element : container) {
    // Loop body
}
```
- **Type**: Data type of container elements.
- **Element**: Variable representing each element.
- **Container**: A collection like an array or vector.

**Example**:
```cpp
int arr[] = {10, 20, 30};
for (int x : arr) {
    cout << x << " "; // Outputs: 10 20 30
}
```

---

## 3. Loop Control Statements

- **break**: Exits the loop immediately.
  ```cpp
  for (int i = 1; i <= 10; i++) {
      if (i == 5) break;
      cout << i << " "; // Outputs: 1 2 3 4
  }
  ```
- **continue**: Skips the current iteration and proceeds to the next.
  ```cpp
  for (int i = 1; i <= 5; i++) {
      if (i == 3) continue;
      cout << i << " "; // Outputs: 1 2 4 5
  }
  ```

---

## 4. Example Program with User Input

This program demonstrates all loop types using user input, integrating concepts from your prior request. It processes a user-defined number of integers, performing different tasks with each loop.

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Variables for user input
    string username;
    int n;
    vector<int> numbers;

    // Taking user input
    cout << "Enter your name: ";
    getline(cin, username);
    cout << "Hello, " << username << "! Enter how many numbers to process (1-10): ";
    cin >> n;

    // Input validation
    if (n < 1 || n > 10) {
        cout << "Invalid input! Please enter a number between 1 and 10." << endl;
        return 1;
    }

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // For Loop: Sum of squares
    cout << "\n=== For Loop: Sum of Squares ===" << endl;
    int sumSquares = 0;
    for (int i = 0; i < n; i++) {
        sumSquares += numbers[i] * numbers[i];
    }
    cout << "Sum of squares: " << sumSquares << endl;

    // While Loop: Count positive numbers
    cout << "\n=== While Loop: Count Positive Numbers ===" << endl;
    int index = 0, positiveCount = 0;
    while (index < n) {
        if (numbers[index] > 0) positiveCount++;
        index++;
    }
    cout << "Number of positive numbers: " << positiveCount << endl;

    // Do-While Loop: Print numbers until negative
    cout << "\n=== Do-While Loop: Numbers Until Negative ===" << endl;
    index = 0;
    do {
        if (numbers[index] < 0) break;
        cout << numbers[index] << " ";
        index++;
    } while (index < n);
    cout << endl;

    // Foreach Loop: Double even numbers
    cout << "\n=== Foreach Loop: Double Even Numbers ===" << endl;
    for (int num : numbers) {
        if (num % 2 == 0) {
            cout << num * 2 << " ";
        }
    }
    cout << endl;

    return 0;
}
```

### Sample Output (for inputs `n = 5`, numbers = `4 -2 3 6 8`)
```
Enter your name: Pankaj
Hello, Pankaj! Enter how many numbers to process (1-10): 5
Enter 5 integers:
4 -2 3 6 8

=== For Loop: Sum of Squares ===
Sum of squares: 105

=== While Loop: Count Positive Numbers ===
Number of positive numbers: 4

=== Do-While Loop: Numbers Until Negative ===
4

=== Foreach Loop: Double Even Numbers ===
8 12 16
```

### Explanation
- **Input**: Uses `getline` for username and `cin` for `n` and a vector of integers.
- **For Loop**: Calculates the sum of squares of all numbers.
- **While Loop**: Counts positive numbers in the vector.
- **Do-While Loop**: Prints numbers until a negative number is encountered (using `break`).
- **Foreach Loop**: Doubles and prints even numbers.
- **Pro Features**: Input validation, vector for dynamic storage, clear output formatting, and use of `break`.

---

## 5. Assignment Questions for Each Loop

Below are **five assignment questions** for each loop type to reinforce understanding. Each question is beginner-friendly but progressively challenging to build skills.

### 5.1. For Loop Assignments
1. **Sum of First N Numbers**: Write a program that takes an integer `n` (1-100) and uses a `for` loop to calculate the sum of numbers from 1 to `n`. Display the result.
   - *Sample Input*: `n = 5`
   - *Sample Output*: `Sum of 1 to 5: 15`

2. **Print Multiplication Table**: Take a number `num` (1-10) and use a `for` loop to print its multiplication table from 1 to 10.
   - *Sample Input*: `num = 3`
   - *Sample Output*: `3 x 1 = 3`, `3 x 2 = 6`, ..., `3 x 10 = 30`

3. **Count Divisors**: Take an integer `n` (1-1000) and use a `for` loop to count how many numbers from 1 to `n` divide `n` evenly (no remainder).
   - *Sample Input*: `n = 6`
   - *Sample Output*: `Divisors of 6: 4` (1, 2, 3, 6)

4. **Reverse Number Sequence**: Take an integer `n` (1-20) and use a `for` loop to print numbers from `n` down to 1.
   - *Sample Input*: `n = 5`
   - *Sample Output*: `5 4 3 2 1`

5. **Fibonacci Sequence**: Take an integer `n` (1-15) and use a `for` loop to print the first `n` Fibonacci numbers (starting with 0, 1).
   - *Sample Input*: `n = 6`
   - *Sample Output*: `0 1 1 2 3 5`

### 5.2. While Loop Assignments
1. **Sum Until Zero**: Take integers as input until the user enters 0, using a `while` loop to compute their sum.
   - *Sample Input*: `4 3 2 0`
   - *Sample Output*: `Sum: 9`

2. **Find First Negative**: Take a sequence of integers (stop when input is 999) and use a `while` loop to find the index of the first negative number.
   - *Sample Input*: `5 3 -2 4 999`
   - *Sample Output*: `First negative at index: 2`

3. **Power Calculation**: Take a base and exponent (both positive integers) and use a `while` loop to calculate `base^exponent` without using `pow()`.
   - *Sample Input*: `base = 2, exponent = 3`
   - *Sample Output*: `2^3 = 8`

4. **Count Digits**: Take a positive integer `n` (up to 10^9) and use a `while` loop to count its digits.
   - *Sample Input*: `n = 1234`
   - *Sample Output*: `Number of digits: 4`

5. **Reverse Digits**: Take a positive integer `n` and use a `while` loop to reverse its digits.
   - *Sample Input*: `n = 123`
   - *Sample Output*: `Reversed number: 321`

### 5.3. Do-While Loop Assignments
1. **Validate Positive Input**: Use a `do-while` loop to prompt for a positive integer until a valid input (greater than 0) is entered, then print its square.
   - *Sample Input*: `-2 0 5`
   - *Sample Output*: `Square of 5: 25`

2. **Menu-Driven Program**: Create a menu with options (1: Add, 2: Subtract, 3: Exit). Use a `do-while` loop to repeatedly prompt for a choice and two numbers until the user selects Exit.
   - *Sample Input*: `1 5 3`, `2 5 3`, `3`
   - *Sample Output*: `5 + 3 = 8`, `5 - 3 = 2`

3. **Sum Until Negative**: Take integers in a `do-while` loop until a negative number is entered, then print their sum (excluding the negative number).
   - *Sample Input*: `4 3 2 -1`
   - *Sample Output*: `Sum: 9`

4. **Guess the Number**: Generate a random number between 1 and 10 (use `rand() % 10 + 1`). Use a `do-while` loop to prompt the user to guess it, providing hints (higher/lower) until correct.
   - *Sample Input*: (Random number = 7) `5 8 7`
   - *Sample Output*: `Too low!`, `Too high!`, `Correct!`

5. **Count Even Inputs**: Use a `do-while` loop to take integers until 0 is entered, counting how many even numbers were input.
   - *Sample Input*: `4 3 6 0`
   - *Sample Output*: `Even numbers: 2`

### 5.4. Range-Based For Loop (Foreach) Assignments
1. **Sum of Array**: Take 5 integers into an array and use a range-based `for` loop to calculate their sum.
   - *Sample Input*: `1 2 3 4 5`
   - *Sample Output*: `Sum: 15`

2. **Print Even Elements**: Take 6 integers into a vector and use a range-based `for` loop to print only the even elements.
   - *Sample Input*: `1 2 3 4 5 6`
   - *Sample Output*: `2 4 6`

3. **Count Positives in Vector**: Take `n` (1-10) integers into a vector and use a range-based `for` loop to count positive numbers.
   - *Sample Input*: `n = 4`, `-1 2 3 -4`
   - *Sample Output*: `Positive numbers: 2`

4. **Reverse Print**: Take 5 strings into a vector and use a range-based `for` loop to print them in reverse order (store in vector, then reverse iterate or use another loop).
   - *Sample Input*: `apple banana cherry date elder`
   - *Sample Output*: `elder date cherry banana apple`

5. **Find Maximum**: Take 5 integers into an array and use a range-based `for` loop to find the maximum value.
   - *Sample Input*: `3 7 2 9 1`
   - *Sample Output*: `Maximum: 9`

---

## 6. Common Mistakes and Best Practices

- **Infinite Loops**: Ensure loop conditions become false (e.g., increment in `while`/`do-while`).
- **Off-by-One Errors**: Verify loop bounds (e.g., `i < n` vs. `i <= n`).
- **Do-While Use Case**: Use `do-while` for tasks requiring at least one iteration, like input validation.
- **Foreach Read-Only**: Range-based `for` loops are read-only by default; use references (`int& x`) to modify elements.
- **Input Validation**: Always validate user input to prevent crashes or incorrect results.
- **Clear Output**: Use descriptive labels and formatting for readability.

---

## 7. Example Program with Assignment Solutions

Below is a sample program solving one question from each loop category to demonstrate implementation.

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string username;
    cout << "Enter your name: ";
    getline(cin, username);
    cout << "Hello, " << username << "!" << endl;

    // For Loop: Sum of first n numbers (Assignment 1)
    cout << "\n=== For Loop: Sum of First N Numbers ===" << endl;
    int n;
    cout << "Enter n (1-100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of 1 to " << n << ": " << sum << endl;

    // While Loop: Sum until zero (Assignment 1)
    cout << "\n=== While Loop: Sum Until Zero ===" << endl;
    int num, sumUntilZero = 0;
    cout << "Enter integers (0 to stop): ";
    cin >> num;
    while (num != 0) {
        sumUntilZero += num;
        cin >> num;
    }
    cout << "Sum: " << sumUntilZero << endl;

    // Do-While Loop: Validate positive input (Assignment 1)
    cout << "\n=== Do-While Loop: Square of Positive Number ===" << endl;
    int positiveNum;
    do {
        cout << "Enter a positive number: ";
        cin >> positiveNum;
    } while (positiveNum <= 0);
    cout << "Square of " << positiveNum << ": " << positiveNum * positiveNum << endl;

    // Foreach Loop: Sum of array (Assignment 1)
    cout << "\n=== Foreach Loop: Sum of Array ===" << endl;
    vector<int> arr(5);
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int arrSum = 0;
    for (int x : arr) {
        arrSum += x;
    }
    cout << "Sum: " << arrSum << endl;

    return 0;
}
```

### Sample Output
```
Enter your name: Pankaj
Hello, Pankaj!

=== For Loop: Sum of First N Numbers ===
Enter n (1-100): 5
Sum of 1 to 5: 15

=== While Loop: Sum Until Zero ===
Enter integers (0 to stop): 4 3 2 0
Sum: 9

=== Do-While Loop: Square of Positive Number ===
Enter a positive number: -2
Enter a positive number: 0
Enter a positive number: 5
Square of 5: 25

=== Foreach Loop: Sum of Array ===
Enter 5 integers: 1 2 3 4 5
Sum: 15
```

---


For more C++ tutorials and coding challenges, visit **codeswithpankaj.com**!

---