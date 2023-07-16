#include "calc.h"

/**
* author: Ukasquared
* main - compute arithmetric operations
*
* return: 0 (success)
*/

int main(void)
{
	int result, first_num, second_num, validate_input;
	char c;
	
	validate_input = 0;

	printf("Welcome to myhandy calculator. This calculator accepts user input according to instruction\n");
	while (validate_input == 0)
	{
		printf("input first number\n");
		scanf("%d", &first_num);
		if(isdigit(first_num) != 0)
			validate_input = 1;
		else
			printf("error, not a number\n");
	}

	while (validate_input == 1)
	{
		printf("input an operator: \naddition = +\nsubtraction = -\nmultiplication = *\ndivision = /\n");
		scanf("%c", &c);
		if(c == '+' || c == '*' || c == '-' || c == '/')
			validate_input = 2;
		else
			printf("use the correct operator\n");
	}

	while (validate_input == 2)
	{
		printf("input second number\n");
		scanf("%d", &second_num);
		if(isdigit(second_num) != 0)
			validate_input = 3;
		else
			printf("error, not a number\n");
	}

	result = opr(c);
	printf("%d", result);
}
