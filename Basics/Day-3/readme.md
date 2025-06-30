
Understanding variables and data types is the **foundation of C++ programming and DSA (Data Structures & Algorithms)**. These concepts are used in every C++ problem you'll solve.

---

## 🔹 What is a Variable?

A **variable** is a named memory location that stores data. Its value can change during program execution. Variables help programmers store, retrieve, and manipulate data efficiently.

### ✅ Key Characteristics:

* Each variable must have a **data type**.
* Variables must be **declared before use**.
* A variable name should be **meaningful** to improve readability.

### ✅ Example:

```cpp
int age = 21;
float pi = 3.14;
```

---

## 🔹 Rules for Naming Variables

* Must begin with a **letter (A–Z, a–z)** or **underscore `_`**
* Cannot start with a digit
* No spaces or special symbols like `@`, `$`, `%`
* Cannot use **C++ keywords** (e.g., `int`, `return`, `while`)
* **Case-sensitive**: `Age` and `age` are different variables
* Should be **descriptive**, e.g., use `marks` instead of `m`

---

## 🔹 Data Types in C++

Data types define the **kind of data** a variable can hold. C++ supports several categories:

### 🔸 **1. Fundamental (Primitive) Data Types**

| Data Type | Description           | Example              | Size (Approx) |
| --------- | --------------------- | -------------------- | ------------- |
| `int`     | Whole numbers         | `int age = 20;`      | 4 bytes       |
| `float`   | Decimal numbers       | `float pi = 3.14;`   | 4 bytes       |
| `double`  | Large decimal numbers | `double d = 1.2345;` | 8 bytes       |
| `char`    | Single character      | `char grade = 'A';`  | 1 byte        |
| `bool`    | True or false         | `bool pass = true;`  | 1 byte        |

### 🔸 **2. String (from Standard Library)**

* Used to store text or sequence of characters
* Needs header: `#include <string>`

```cpp
string name = "Sandeep";
```

### 🔸 **3. Derived Data Types**

* Built from primitive types
* Common examples:

  * **Arrays**: `int marks[5];`
  * **Pointers**: `int* ptr;`
  * **Functions**


## 🔹 Why Variables & Data Types Matter in DSA

🔸 Data types are critical in solving DSA problems:

* ✅ **int**: Used for indexing, counting, loop controls
* ✅ **bool**: For visited flags in DFS, BFS, condition checks
* ✅ **char/string**: For problems on strings, pattern matching, character arrays
* ✅ **Pointers**: Vital for dynamic memory, linked lists, trees, graphs
* ✅ **float/double**: Useful in geometry, scientific calculations

🔸 Choosing the right type:

* Avoids typecasting and improves performance
* Helps **optimize space & time** in memory-constrained problems

---

## 🔹 Example Program:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9;
    char grade = 'A';
    bool passed = true;
    string name = "Sandeep";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;

    return 0;
}
```

---

## 🔹 Summary for Quick Revision

* 📌 Variables are containers that store data in memory.
* 📌 Every variable must be declared with a proper **data type**.
* 📌 Correct use of data types helps in solving DSA problems efficiently.
* 📌 Used in all major DSA topics like **arrays, strings, linked lists, trees, graphs**.
* 📌 Understanding types and memory is key to mastering **recursion**, **pointers**, and **dynamic programming**.

