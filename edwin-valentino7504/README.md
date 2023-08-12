# Calculator Project

This project is a basic command line calculator written purely in C (could be extended to other languages later).  
It allows you perform 9 operations - addition, subtraction, multiplication, division, roots, power, sin, cos and tan.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Example](#example-usage)
- [License and Affiliations](#license-and-affiliations)
- [Conclusion](#conclusion)

## Introduction

Welcome to the Calculator project! This simple command-line calculator allows you to perform basic mathematical calculations right from your terminal. Whether you need to add, subtract, multiply, divide, or even calculate powers or roots and trig functions, this calculator has got you covered.

The calculator makes it easy to perform calculations quickly and accurately. It is implemented in C, ensuring efficiency and portability across different platforms.

In this README, you will find instructions on how to use the calculator, information on supported operations, input format, and more.  

***Let's get started!***

## Usage

To use the calculator

- Clone this repository to your local machine

- Navigate to the directory of the cloned repo

- Compile with the command

```console
gcc -Wall -Werror -pedantic -std=gnu89 *.c -o calculator -lm
```

The lm flag is to link the math library

- Run the program "./calculator"

- Follow the prompts

## Example Usage

```console
user@hostname:~/calculator-dir$ gcc -Wall -Werror -pedantic -std=gnu89 *.c -o calculator -lm
user@hostname:~/calculator-dir$ ./calculator

  C A L C U L A T O R  
_______________________

Welcome to Edwin's calculator!
What's your name: valentino

Hi, Valentino!

These are the valid operators:
+ - adds first and second operand
- - subtracts second from first operand
* - multiplies first operand by second operand
/ - divides first operand by second operand
^ - raises first operand to power of second operand
root - takes second operand'th root of first operand
sin, cos & tan - takes sin, cos and tan of angle (degrees)

Enter "off" or press Ctrl + D (except macOS) at any time to exit

Enter the value of the first operand: 22
Enter the operator: + 
Enter the value of the second operand: 3
22.0000 + 3.0000 = 25.0000

Enter the value of the first operand: 34
Enter the operator: -
Enter the value of the second operand: 22
34.0000 - 22.0000 = 12.0000

Enter the value of the first operand: 45
Enter the operator: sin
sin(45.00) = 0.7071

Enter the value of the first operand: 27
Enter the operator: root
Enter the value of the second operand: 3
\3|27.0000 = 3.0000

Enter the value of the first operand: 2
Enter the operator: ^
Enter the value of the second operand: 2
2.0000 ^ 2.0000 = 4.0000

Enter the value of the first operand: off

Thank you for using Edwin's calculator
Goodbye!
```

## License and Affiliations

This project is licensed under the MIT license.  
This project was developed under the ALX Algorithmia open source organization. ALX Algorithmia provides resources and practical projects to help individuals learn and improve their programming skills.

## Conclusion

If you have any questions or feedback, please contact me at [edwinmbonyjr@gmail.com](mailto:edwinmbonyjr@gmail.com). I thoroughly enjoyed working on this project and I hope you have fun using it. Thank you to ALX Algorithmia for this wonderful opportunity.  

***Enjoy calculating!!!!😁***
