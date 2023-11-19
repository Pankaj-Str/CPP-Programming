# C++ Data Structures: Building the Foundations of Efficient Programs

Welcome to this extensive tutorial on C++ data structures, where we will explore the fundamental building blocks that empower efficient and organized programming. Data structures are essential for managing and storing data, and a solid understanding of them is crucial for developing robust and optimized software. In this tutorial, we'll cover various data structures, providing complete examples for each topic to deepen your comprehension.

## Table of Contents
- [C++ Data Structures: Building the Foundations of Efficient Programs](#c-data-structures-building-the-foundations-of-efficient-programs)
  - [Table of Contents](#table-of-contents)
  - [1. Introduction to C++ Data Structures ](#1-introduction-to-c-data-structures-)
  - [2. Arrays ](#2-arrays-)
  - [3. Linked Lists ](#3-linked-lists-)
  - [4. Stacks ](#4-stacks-)
  - [5. Queues ](#5-queues-)
  - [6. Trees ](#6-trees-)
  - [7. Graphs ](#7-graphs-)
  - [8. Hash Tables ](#8-hash-tables-)
  - [9. Advanced Data Structures ](#9-advanced-data-structures-)
  - [10. Practical Example ](#10-practical-example-)
  - [11. Conclusion \<a name="](#11-conclusion-a-name)

## 1. Introduction to C++ Data Structures <a name="introduction"></a>

Data structures are containers that hold, organize, and manage data. In C++, various data structures cater to different needs, providing efficiency in terms of time and space complexity.

## 2. Arrays <a name="arrays"></a>

Arrays are a fundamental data structure, representing a collection of elements stored in contiguous memory locations.

```cpp
#include <iostream>

int main() {
    // Declaration and Initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing Elements
    std::cout << "Third element: " << numbers[2] << std::endl;

    // ... (rest of the code)
}
```

## 3. Linked Lists <a name="linked-lists"></a>

Linked lists consist of nodes, each containing data and a reference to the next node.

```cpp
#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    // Creating a Linked List
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    // ... (rest of the code)
}
```

## 4. Stacks <a name="stacks"></a>

Stacks follow the Last In, First Out (LIFO) principle, where the last element added is the first to be removed.

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;

    // Pushing Elements onto the Stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Popping Elements from the Stack
    while (!stack.empty()) {
        std::cout << "Popped: " << stack.top() << std::endl;
        stack.pop();
    }

    // ... (rest of the code)
}
```

## 5. Queues <a name="queues"></a>

Queues follow the First In, First Out (FIFO) principle, where the first element added is the first to be removed.

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue;

    // Enqueuing Elements
    queue.push(1);
    queue.push(2);
    queue.push(3);

    // Dequeuing Elements
    while (!queue.empty()) {
        std::cout << "Dequeued: " << queue.front() << std::endl;
        queue.pop();
    }

    // ... (rest of the code)
}
```

## 6. Trees <a name="trees"></a>

Trees are hierarchical data structures with a root node and branches.

```cpp
#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

int main() {
    // Creating a Binary Tree
    TreeNode* root = new TreeNode{1, nullptr, nullptr};
    root->left = new TreeNode{2, nullptr, nullptr};
    root->right = new TreeNode{3, nullptr, nullptr};

    // ... (rest of the code)
}
```

## 7. Graphs <a name="graphs"></a>

Graphs consist of vertices and edges, representing relationships between entities.

```cpp
#include <iostream>
#include <vector>

struct Graph {
    int vertices;
    std::vector<std::vector<int>> adjacencyList;
};

int main() {
    // Creating a Graph
    Graph graph{4, {{1, 2}, {2, 3}, {3, 4}, {4, 1}}};

    // ... (rest of the code)
}
```

## 8. Hash Tables <a name="hash-tables"></a>

Hash tables store data in key-value pairs, providing fast retrieval based on keys.

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> hashMap;

    // Inserting Key-Value Pairs
    hashMap["one"] = 1;
    hashMap["two"] = 2;
    hashMap["three"] = 3;

    // Accessing Values
    std::cout << "Value for key 'two': " << hashMap["two"] << std::endl;

    // ... (rest of the code)
}
```

## 9. Advanced Data Structures <a name="advanced-data-structures"></a>

Explore advanced data structures like AVL trees, B-trees, and more based on specific application requirements.

```cpp
// Example of AVL Tree
#include <iostream>

struct AVLNode {
    int data;
    AVLNode* left;
    AVLNode* right;
    int height;
};

// ... (rest of the code)
```

## 10. Practical Example <a name="practical-example"></a>

Let's apply our knowledge to a practical example: a program that uses a hash table to store and retrieve student information.

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

struct Student {
    std::string name;
    int age;
    double gpa;
};

int main() {
    std::unordered_map<std::string, Student> studentTable;

    // Inserting Student Information
    studentTable["John"] = {"John Doe", 20, 3.8};
    studentTable["Jane"] = {"Jane Smith", 21, 3.9};
    studentTable["Bob"] = {"Bob Johnson", 19, 3.5};

    // Retrieving and Displaying Information
    std::string searchName = "Jane";
    if (studentTable.find(searchName) != studentTable.end()) {
        Student& foundStudent = studentTable[searchName];
        std::cout << "Student Information for " << searchName << ":\n";
        std::cout << "Name: " << foundStudent.name << "\n";
        std::cout << "Age: " << foundStudent.age << "\n";
        std::cout << "GPA: " << foundStudent.gpa << "\n";
    } else {
        std::cout << "Student not found.\n";
    }

    // ... (rest of the code)
}
```

## 11. Conclusion <a name="

conclusion"></a>

Congratulations! You've now delved into the realm of C++ data structures, mastering the essential concepts and gaining practical experience through examples. These foundational elements are key to writing efficient and organized programs.

For more programming tutorials and resources, visit [codeswithpankaj.com](https://codeswithpankaj.com). Happy coding!