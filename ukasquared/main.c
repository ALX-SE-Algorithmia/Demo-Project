#include "calc.h"

/**
* author: Ukasquared
* main - compute arithmetric operations
*
* return: 0 (success)
*/

int main(void)
{
	//declaration of variable
	int result, first_num, second_num, validate_input;
	char c[2];
	char input_one[100];
	char input_two[100];
	
	//used to validate user input
	validate_input = 0;

	printf("Welcome to myhandy calculator. This calculator accepts user input according to instruction\n");
	while (validate_input == 0)
	{
		int i = 0;

		printf("input first number: ");
		scanf("%s", input_one);
		
		while (input_one[i] != '\0')
		{
			//checks if user input is a number
			if(isdigit(input_one[i]) == 0)
			{	printf("error, not a number\n");
				break;
			}
			i++;
		}
		
		// converts user input to number
		if(input_one[i] == '\0' && i > 0)
		{
		first_num = atoi(input_one);
		validate_input = 1;
		}
	}

	while (validate_input == 1)
	{
		printf("input an operator: \naddition = +\nsubtraction = -\nmultiplication = *\ndivision = /\n");

		scanf("%s", c);
		if(c[0] == '+' || c[0] == '*' || c[0] == '-' || c[0] == '/')
			validate_input = 2;
		else
			printf("use the correct operator\n");
	}

	
	while (validate_input == 2)
	{
		int i = 0;

		printf("input second number: ");
		scanf("%s", input_two);
		while (input_two[i] != '\0')
		{
			if(isdigit(input_two[i]) == 0)
			{	printf("error, not a number\n");
				break;
			}
			i++;
		}
		if(input_two[i] == '\0' && i > 0)
		{
		second_num = atoi(input_two);
		validate_input = 3;
		}
	}

	result = opr(c, first_num, second_num);
	printf("The result of this computation is %d\n", result);
}
