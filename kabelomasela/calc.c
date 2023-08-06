#include <stdio.h>
#include <stdlib.h>

/* Defining functions */
float addition(float x, float y);
float subtraction(float x, float y);
float multiplication(float x, float y);
float division(float x, float y);

/* Defining choice letter and input numbers */
char choice;
float x, y;

int main() {
	while (1) {
	printf("Enter the operator (+, -, *, /)\nEnter x to exit\n");
	scanf(" %c", &choice);

	/* For exit */
	if (choice == 'x')
		exit(0);
	}

	printf("Enter the two numbers: ");
	scanf("%f, %f", &x, &y);

	/* Switch case with operation for each operator */
	switch (choice) {
		case '+':
		addition(x, y);
		break;

		case '-':
		subtraction(x, y);
		break;
		
		case '*':
		multiplication(x, y);
		break;
		
		case '/':
		division(x, y);
		break;

		default:
		printf("Invalid Operator Input\n");
		}
	}

	        return 0;
}

float addition(float x, float y) {
	    float added = x + y;
	        printf("%.2f + %.2f = %.2f\n", x, y, added);
		    return added;
}

float subtraction(float x, float y) {
	    float subtracted = x - y;
	        printf("%.2f - %.2f = %.2f\n", x, y, subtracted);
		    return subtracted;
}

float multiplication(float x, float y) {
	    float multiplied = x * y;
	        printf("%.2f * %.2f = %.2f\n", x, y, multiplied);
		    return multiplied;
}

float division(float x, float y) {
	if (y == 0) {
	printf("Division by zero is not allowed\n");
	return 0;
	}
	        
	        float divided = x / y;
		printf("%.2f / %.2f = %.2f\n", x, y, divided);
		return divided;
}

