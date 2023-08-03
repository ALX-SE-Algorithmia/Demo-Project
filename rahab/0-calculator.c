#include "main.h"

/* Function to check if the operator is valid*/
int isValidOperator(char operator) 
{
	return operator == '+' || operator == '-' || operator == '*' || operator == '/';
}

/*Function to add two numbers */
float addition(float num1, float num2) {
	return num1 + num2;
}

/*Function to subtract two numbers*/
float subtraction(float num1, float num2) {
	return num1 - num2;
}

/*Function to multiply two numbers */
float multiplication(float num1, float num2) {
	return num1 * num2;
}

/*Function to divide two numbers */
float division(float num1, float num2) {
	if (num2 == 0) {
		printf("Error: Cannot divide by zero!\n");
		return 0;
	}
	return num1 / num2;
}
