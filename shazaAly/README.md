# calc.h

**Description:**
`calc.h` is a header file that provides function prototypes for basic mathematical operations. The file contains declarations for functions to perform addition, subtraction, multiplication, division, and exponentiation.

**Usage:**
To use the functions defined in this header file, include `calc.h` in your C/C++ source code and link with the appropriate implementation.

**Note:**
Ensure that you have the necessary math library linked when using `expo` function to utilize the `pow()` function.

## Functions:

### `double add(double a, double b)`
This function takes two double precision floating-point numbers `a` and `b` as input and returns their sum.

### `double sub(double a, double b)`
This function takes two double precision floating-point numbers `a` and `b` as input and returns the result of subtracting `b` from `a`.

### `double mul(double a, double b)`
This function takes two double precision floating-point numbers `a` and `b` as input and returns their product.

### `double div(double a, double b)`
This function takes two double precision floating-point numbers `a` and `b` as input and returns the result of dividing `a` by `b`. If `b` is equal to zero, it will print an error message and return 0.00 to avoid division by zero.

### `double expo(double a, double b)`
This function takes two double precision floating-point numbers `a` and `b` as input and returns `a` raised to the power of `b`. Make sure to link the necessary math library to use the `pow()` function.

**Example:**
```c
#include <stdio.h>
#include "calc.h"

int main() {
    double num1 = 10.0;
    double num2 = 5.0;

    printf("Addition: %.2f\n", add(num1, num2));
    printf("Subtraction: %.2f\n", sub(num1, num2));
    printf("Multiplication: %.2f\n", mul(num1, num2));
    printf("Division: %.2f\n", div(num1, num2));
    printf("Exponentiation: %.2f\n", expo(num1, num2));

    return 0;
}
```

**Note:** Don't forget to link with the math library when compiling the code that uses the `expo` function:

```
gcc -o my_program my_program.c -lm
```