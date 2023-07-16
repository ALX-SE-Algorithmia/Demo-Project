# Bett's bmi calculator
This is my implementation of a simple bmi calc
BMI refers to:
           B - Body
           M - Mass
           I - Index
 

In the code , we use 'printf' function to prompt the user to enter their weight and height. The 'scanf' function is used to read the user's input and store it in the 'weight' and 'height' variables respectively


Then, the BMI is calculated by dividing the weight (in kilograms) by the square of the height(in meters). The result is stored in the 'bmi' variable

Finally, we use the 'printf' function to again display the calculated BMI to the user, with a prescision to two decimal places

the code ends by returning 0 to indicate a successful execution

# Calculator Implementation
I have added the calc.c file to implement the calculator functionality 

I was not able to implement the memory allocation
feature in this code.

Two helper functions, getValidNumber() and getValidOperator(), are defined to handle input validation and error handling. These functions ensure that the user enters valid numbers and valid operators.

The main function begins by declaring variables to store the operator, two numbers, and the result.

The user is prompted to enter an operator using the printf function, and the getValidOperator() function is called to read a valid operator from the user.

A switch statement is used to perform different operations based on the selected operator.

Each case handles a specific operation:

For arithmetic operations (+, -, *, /), the user is prompted to enter two numbers using the printf function, and the getValidNumber() function is called to read valid numbers. The corresponding arithmetic operation is performed, and the result is displayed.

For exponentiation (^), the user is prompted to enter the base and exponent using the printf function, and the getValidNumber() function is called to read valid numbers. The pow() function from math.h is used to calculate the result, and it is displayed.

For square root (sqrt), the user is prompted to enter a number using the printf function, and the getValidNumber() function is called to read a valid number. The sqrt() function from math.h is used to calculate the result, and it is displayed. An error message is shown if the user enters a negative number.

For percentage (%), the user is prompted to enter a number and a percentage value using the printf function, and the getValidNumber() function is called to read valid numbers. The result is calculated as the product of the number and the percentage divided by 100, and it is displayed.

For absolute value (abs), the user is prompted to enter a number using the printf function, and the getValidNumber() function is called to read a valid number. The fabs() function from math.h is used to calculate the absolute value, and it is displayed.

For factorial (!), the user is prompted to enter a non-negative integer using the printf function, and the getValidNumber() function is called to read a valid number. The result is calculated using a loop, and it is displayed. An error message is shown if the user enters a negative number or a non-integer value.

For logarithm (log), the user is prompted to enter a number and a base using the printf function, and the getValidNumber() function is called to read valid numbers. The result is calculated using the log() function from math.h, and it is displayed. Error messages are shown if the user enters invalid values, such as a negative number, a base of 1, or a base that is not a positive number.

For trigonometric functions (sin, cos, tan), the user is prompted to enter an angle in degrees using the printf function, and the getValidNumber() function is called to read a valid number. The angle is converted to radians, and the corresponding trigonometric function from math.h is used to calculate the result. The result is displayed.

For memory operations (mem), a message is displayed indicating that memory operations are not implemented in this code.

The default case handles the scenario when an invalid operator is entered, and an error message is displayed.

To add memory location functionality, you can declare a variable to store the memory value, and then include additional cases in the switch statement to handle memory-related operations such as storing a value in memory, recalling the stored value, adding or subtracting from the stored value, or clearing the memory. You would need to prompt the user for additional input and perform the corresponding operations based on the selected memory operation.

# How to run the program

To run the code, you can follow these steps:

Open a text editor and create a new file. Copy the entire code into the file.

Save the file with a ".c" extension, for example, "calc.c".

Open a command prompt or terminal and navigate to the directory where you saved the "calc.c" file.

Compile the code using a C compiler. For example, if you have the GCC compiler installed, you can use the following command:


gcc calc.c -o calc
This will generate an executable file named "calc" in the same directory.

Run the executable by executing the following command:

./calc
The program will prompt you to enter an operator. You can choose one of the available operators: '+', '-', '*', '/', '^', 'sqrt', '%', 'A', '!', 'L', 'S', 'C', 'T', 'M'.

Depending on the selected operator, the program will prompt you for the required input (e.g., numbers for arithmetic operations, base and exponent for exponentiation, etc.).

Enter the required input and press Enter.

The program will perform the requested operation and display the result.

You can continue using the calculator by entering another operator or terminate the program by closing the command prompt or pressing Ctrl+C.

Make sure you have a C compiler installed on your system and the necessary libraries (such as math.h) available. If you encounter any errors during compilation or execution, check your environment setup and ensure that the required dependencies are properly installed.

Note: The memory operations (M) are not implemented in this code and are indicated by a message. You can modify the code to include the desired functionality for memory operations as discussed earlier.