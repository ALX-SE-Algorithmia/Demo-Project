# Hullah's Implementation of the Calculator

This is my implementation of the calculator. It determines errors in the user input. It performs a total of 5 different operations which are:
 `*, ^, /, -, +` Each of which denotes `multplication, power, division, subtraction and addition` .

You can compile with ***gcc -Wall -Werror -Wextra -pedantic *.c -o calculator***.
You hav to first change to the src directory before compilation.

**For example**

    $ gcc -g -Wall -Werror -Wextra -pedantic *.c -o calculator
    $ ./calculator
    Enter a number: 76
    Enter a number: 86 
    Enter the operation: I
    INVALID OPERATION
    Enter a valid oparation: ^
    5.62301e+161
    $./calculator
    Enter a number: hey
    INVALID NUMBER
    Enter a valid number: 89
    Enter a number: 5576i love you
    INVALID NUMBER
    Enter a valid number: 897
    Enter the operation: +
    986

Also, I ensured memory leaks were not possible.
