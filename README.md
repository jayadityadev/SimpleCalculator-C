# Simple Calculator Program

This is a simple command-line calculator program written in C. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [Acknowledgement](#acknowledgement)

## Features

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Graceful exit (q)

## Getting Started

1. Clone this repository to your local machine:

    ```shell
    git clone https://github.com/jayadityadev/SimpleCalculator-C.git
    ```

2. Compile the program using a C compiler (e.g., GCC):
   
    ```shell
    gcc calculator.c -o calculator
    ```

## Usage

1. Run the program:

    ```shell
    ./calculator
    ```
   
2. After running the program, you will see a menu displaying the available operations.

3. Enter the desired operation (e.g., + for addition) or 'q' to exit.
   
4. If you choose an arithmetic operation, you will be prompted to enter two numbers.

5. The program will then perform the selected operation and display the result.

6. Division by zero is not allowed, and the program will handle this case gracefully.

## Examples

```yaml
Simple Calculator Program!

Addition: +
Subtraction: -
Multiplication: *
Division: /
Exit: q

Task: +
Enter first number: 10
Enter second number: 5

The sum of 10 and 5 is 15.

Task: /
Enter first number: 10
Enter second number: 0

Error: Division by zero is not allowed.

Task: q

Exiting the program.

```

## Contributing

Contributions are welcome! If you would like to improve this program, please follow these steps:

1. Fork the repository.
   
3. Create a new branch for your feature or bugfix:
   
   ```bash
   git checkout -b new-feature.
   ```
   
4. Make your changes and commit them:
   
    ```bash
    git commit -m 'Add new feature'.
   ```
    
6. Push to the branch:
   
    ```bash
    git push origin new-feature
   ```
    
8. Create a pull request from your fork's branch to the main repository's main branch.

## Acknowledgement

This program was created as a simple exercise to demonstrate basic C programming skills. It can serve as a starting point for more complex calculator applications.