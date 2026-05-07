# Lockheed Martin Interview Prep

A structured self-study repository built in preparation for an entry-level software engineering position at Lockheed Martin. This repo covers the core technical areas relevant to defense software development — C++, Bash scripting, CLI, and Linux — with working code examples and exercises for each topic.

---

## About

**Ryan Bowens** — Aspiring software engineer with a programming foundation from a coding bootcamp, currently focused on deepening systems-level knowledge in C++ and Linux environments relevant to aerospace and defense software development.

This repository represents active, hands-on preparation — not just reading, but writing, debugging, and iterating on real code across all four modules.

---

## Modules

### C++ — `/cpp`
9 lessons covering C++ from the ground up with a focus on systems programming concepts used in embedded and real-time environments.

- Program structure, compilation with `g++`
- Variables, data types, arithmetic, and user input
- Conditionals and loops
- Functions and code reuse
- Arrays and STL vectors
- Pointers, memory management, stack vs heap
- Object-oriented programming — classes, inheritance, polymorphism

### Bash Scripting — `/bash`
5 lessons plus a challenge script covering Bash scripting for build automation and system tooling.

- Variables, user input, and output
- Conditionals with numeric and string comparisons
- Loops over arrays and ranges
- Functions with positional parameters
- File I/O, piping, `grep`, and `wc` for log processing

---

## Key Concepts by Domain

| Domain | Concepts |
|--------|----------|
| C++ | RAII, smart pointers, OOP, STL, memory management |
| Bash | Scripting, file I/O, piping, error detection |
| CLI | Terminal navigation, process management, file operations |
| Linux | Filesystem hierarchy, permissions, services, networking |

---

## Why These Technologies

Lockheed Martin's defense and aerospace systems rely on:
- **C++** for performance-critical, real-time, and embedded applications
- **Bash** for build automation, deployment pipelines, and log monitoring
- **Linux** as the operating system for embedded flight computers, servers, and classified systems

This repository reflects a deliberate focus on the tools and concepts most relevant to that environment.

---

## How to Run

**C++ programs:**
```bash
cd cpp
g++ -std=c++17 -o lesson1 lesson1.cpp
./lesson1
```

**Bash scripts** (requires Git Bash on Windows):
```bash
cd bash
bash lesson1.sh
```

---

## Author

Ryan Bowens — [github.com/Ryan-Bowens](https://github.com/Ryan-Bowens)
