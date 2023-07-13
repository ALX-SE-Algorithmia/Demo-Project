# Calculator
This is a simple calculator program written in C. It allows users to perform basic and advanced mathematical operations. Users can choose between addition, subtraction, multiplication, division, exponentiation, and advanced functionalities such as square root, logarithm, and trigonometric operations.

## Getting Started
To compile and run the calculator program, follow these steps:

1. Clone the repository or download the source code files.
2. Open a terminal and navigate to the directory containing the source code files.
3. Compile the program using a C compiler. For example, using gcc:
```
gcc -o calculator calculator.c -lm
```

4. Run the compiled executable:
```
./calculator
```

## Usage
1. Upon running the calculator, you will be prompted to enter your name.
2. Enter your name and press Enter.
3. Next, enter the first number you want to perform the operation on.
4. You will be presented with a menu of operation choices. Enter the number corresponding to the operation you want to perform.
5. If you choose a basic operation (addition, subtraction, multiplication, division, or exponentiation), you will be prompted to enter the second number.
6. The calculator will display the result of the operation.
7. You will be asked if you want to perform more calculations. Enter "yes" to continue or any other input to exit.
8. If you choose the advanced functionalities option, you will be presented with a submenu of advanced operations (square root, logarithm, sin, cos, and tan).
9. Enter the number corresponding to the advanced operation you want to perform.
10. The calculator will display the result of the operation.
11. You will be asked if you want to perform more calculations. Enter "yes" to continue or any other input to exit.

## Error Handling
The calculator program includes error handling for invalid operands and division by zero. If you enter an invalid operand or attempt to divide by zero, an error message will be displayed, and you will be prompted to try again.

## Dependencies
The calculator program uses the math library for advanced mathematical operations. When compiling the program, the -lm flag is used to link the math library.

## Contributing
Contributions to this calculator program are welcome. If you find any issues or want to add new features, please open an issue or submit a pull request.

## License
This calculator program is released under the MIT License. See the LICENSE file for more information.

## Acknowledgements
The calculator program was created by [**Samuel Ogboye**](https://github.com/samuelogboye). It is a simple example of a calculator program and can be used as a starting point for more complex calculator applications.