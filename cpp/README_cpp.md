# C++ — Interview Prep

Practice programs written as part of Lockheed Martin interview preparation, covering core C++ fundamentals from the ground up.

---

## Contents

| File | Topic | Description |
|------|-------|-------------|
| `lesson1.cpp` | Program Structure | `#include`, `main()`, `cout`, comments, and the compilation process |
| `lesson2.cpp` | Variables & Data Types | `int`, `double`, `bool`, `char`, `string` — declaring and printing variables |
| `lesson3.cpp` | Arithmetic & User Input | Arithmetic operators, integer division, and user input with `cin` |
| `lesson4.cpp` | Conditionals | `if/elif/else` chains, comparison operators, and combining conditions with `&&` and `\|\|` |
| `lesson5.cpp` | Loops | `for` and `while` loops, `break`, `continue`, and loop order of operations |
| `lesson6.cpp` | Functions | Return types, `void` functions, parameters, and reusable logic |
| `lesson7.cpp` | Arrays & Vectors | Fixed arrays, `vector<T>`, `push_back()`, `size()`, and range-based for loops |
| `lesson8.cpp` | Pointers & Memory | Memory addresses, `&` and `*` operators, dereferencing, stack vs heap, `new` and `delete` |
| `lesson9.cpp` | Classes & OOP | Class structure, constructors, methods, access specifiers, inheritance, `virtual` and `override` |

---

## Concepts Covered

- Program structure — `#include`, `using namespace std`, `main()`, `return 0`
- Strongly typed variables and the five core data types
- Arithmetic operators and the integer division trap
- User input and output with `cin` and `cout`
- Conditional logic with `if/elif/else` and the `==` vs `=` distinction
- `for` and `while` loops with proper variable updating
- Functions with return types, `void` functions, and multiple parameters
- STL vectors with dynamic sizing and range-based iteration
- Raw pointers, memory addresses, dereferencing, and heap allocation
- Object-oriented programming — classes, constructors, methods, and inheritance
- `virtual` and `override` keywords for polymorphism
- RAII pattern and smart pointers (`unique_ptr`)

---

## How to Compile and Run

Requires `g++` installed. On Windows, install via **MSYS2**.

```bash
g++ -std=c++17 -o lesson1 lesson1.cpp
./lesson1
```

Recompile after every change — the executable does not update automatically.

---

## Author

Ryan Bowens — [github.com/Ryan-Bowens](https://github.com/Ryan-Bowens)
