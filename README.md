# CalculatorOOP

A small C++ calculator demonstrating the **"encapsulate what varies"** design principle. Each arithmetic operation (add, subtract, multiply, divide) is implemented as its own class behind a common `Operation` interface, so operations can be added, removed, or swapped without touching the rest of the program.

## Overview

- **`Operation.h`** — abstract base class defining the interface all operations implement (a `calculate(a, b)` method).
- **`Add.h` / `.cpp`** — addition operation.
- **`Subtract.h` / `.cpp`** — subtraction operation.
- **`Multiply.h` / `.cpp`** — multiplication operation.
- **`Divide.h` / `.cpp`** — division operation.
- **`Calculator.h` / `.cpp`** — calculator class that ties operations together.
- **`main.cpp`** — reads two integers from the user, runs each operation against them, and prints the results.

## How it works

Instead of hardcoding a switch statement for each operation, every operation is its own class implementing the `Operation` interface. `main.cpp` stores them polymorphically as `std::unique_ptr<Operation>` and calls `calculate()` on each one without needing to know which concrete operation it's dealing with:

```cpp
std::vector<std::unique_ptr<Operation>> operations;
operations.push_back(std::make_unique<Add>());
operations.push_back(std::make_unique<Subtract>());
operations.push_back(std::make_unique<Divide>());
operations.push_back(std::make_unique<Multiply>());

for (auto& op : operations) {
    std::cout << op->calculate(a, b) << "\n";
}
```

This means "what varies" — the specific arithmetic logic — is encapsulated in its own class, isolated from the parts of the program that stay the same.

## Building

This project has no external dependencies — just a C++ compiler.

```bash
g++ -std=c++17 -o calculator main.cpp Calculator.cpp Add.cpp Subtract.cpp Multiply.cpp Divide.cpp
./calculator
```

You'll be prompted to enter two integers, and the program will print the result of each operation applied to them.

## Purpose

This is a learning project built to explore the "encapsulate what varies" object-oriented design principle in C++, using a simple calculator as the example.
