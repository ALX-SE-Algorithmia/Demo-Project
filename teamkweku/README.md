# Demo Project - Calculator
> This repo contains an implementation of a Basic Calculator that adds, subtracts, multiplies and divides numbers

## Simple Calculator written in C language
> The program performs very basic add, subtract, multiply and divide operations
`addition`: adding two integers
`subtraction`: subtracting two integers
`multiplication`: multiplying two integers
`division`: dividing two integers. Error occures when you try to divide by a zero

## How to use program
> compile code with the flag `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c operations.c -o main`
- Addition: `$./main num1 + num2`
- Subtraction: `$./main num1 - num2 
- Division: `$./main num1 / num2
- Multiplication: Escape the `*` operator on the commandline to avoid shell expaning * operator as a wildcard. Hence `$./main num1 /* num2` or `$./main num1 '*' num2
- Error: program raises an error message is program is called without or with less intended commandline args
