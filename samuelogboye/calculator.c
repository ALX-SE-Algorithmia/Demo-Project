#include "calc.h"

/**
 * BasicOp - a function that performs basic operations
 * @first_num: first number to work with
 * @second_num: the second number to work with
 * @operand: operand to perform the operation
 * Return: the final result
 */
double BasicOp(double first_num, double second_num, int operand)
{
	double result = 0.0;

	switch (operand)
	{
	case 1:
		result = first_num + second_num;
		break;
	case 2:
		result = first_num - second_num;
		break;
	case 3:
		result = first_num * second_num;
		break;
	case 4:
		if (second_num == 0)
		{
			fprintf(stderr, "You can't divide by zero please\n");
			exit(0);
		}
		result = first_num / second_num;
		break;
	case 5:
		result = pow(first_num, second_num);
		break;
	default:
		fprintf(stderr, "Invalid Operand, please try again\n");
		break;
	}

	return (result);
}

/**
 * AdvancedOp - a function that performs Advanced operations
 * @first_number: number to work with
 * Return: the final result
 */
double AdvancedOp(double first_number)
{
	double result = 0.0;
	int advanced_operand;
	double radians = first_number * M_PI / 180.0;

	printf("Select the operation you wish to perform:\n");
	printf("1. Square root(√)\n");
	printf("2. Logarithm Operations(log)\n");
	printf("3. Trigonometry(sin)\n");
	printf("4. Trigonometry(cos)\n");
	printf("5. Trigonometry(tan)\n");

	printf("Enter the number relating to your choice: ");
	scanf("%d", &advanced_operand);
	switch (advanced_operand)
	{
	case 1:
		result = sqrt(first_number);
		break;
	case 2:
		result = log(first_number);
		break;
	case 3:
		result = sin(radians);
		break;
	case 4:
		result = cos(radians);
		break;
	case 5:
		result = tan(radians);
		break;
	default:
		fprintf(stderr, "Invalid Operand, please try again\n");
		break;
	}

	return (result);
}

/**
 * getOperandChoice - a function thhat gets the operand from the user
 * Return: returns the choice structure
 */
OperandChoice getOperandChoice(void)
{
	OperandChoice choice;

	printf("What's your name\n");
	fgets(choice.name, sizeof(choice.name), stdin);
	choice.name[strcspn(choice.name, "\n")] = '\0';
	printf("****Hi %s, welcome to this calculator*****\n\n", choice.name);

	printf("Enter the first number: ");
	scanf("%lf", &choice.first_number);

	printf("Select the operation you wish to perform:\n");
	printf("1. Addition (+)\n");
	printf("2. Subtraction (-)\n");
	printf("3. Multiplication (x)\n");
	printf("4. Division (/)\n");
	printf("5. Exponentiation(**)\n");
	printf("6. Advanced Functionalities\n");
	printf("Enter the number relating to your choice: ");
	scanf("%d", &choice.operand);

	return (choice);
}

/**
 * main - the main function
 * Return: success
 */
int main(void)
{
	char cont_choice[3], name[50];
	double first_number, second_number, result;
	OperandChoice choice;
	int operand;

	while (1)
	{
		choice = getOperandChoice();
		operand = choice.operand;
		first_number = choice.first_number;
		strcpy(name, choice.name);
		if (operand >= 1 && operand <= 5)
		{
			printf("Enter the second number: ");
			scanf("%lf", &second_number);
			result = BasicOp(first_number, second_number, operand);
		}
		else if (operand == 6)
		{
			result = AdvancedOp(first_number);
		}
		else
		{
			fprintf(stderr, "Invalid Operand, please try again\n");
			continue;
		}

		printf("----\n%.2f\n----\n", result);

		printf("Thank you %s, you wanna do more? (yes/no): ", name);
		scanf("%s", cont_choice);

		if (strcmp(cont_choice, "yes") != 0)
		{
			printf("%s, thanks for using this calculator\n", name);
			break;
		}
	}

	return (0);
}
