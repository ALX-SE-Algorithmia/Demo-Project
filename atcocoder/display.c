#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
#include "input_functions.h"
#include "math_functions.h"
#include "display.h"

/**
 * refresh - Clears the screen.
 *
 * Return: Nothing.
 */
void refresh(void)
{
	sleep(0.5);
	system("clear");
	read_message("simple_calculator.txt");
}


/**
 * read_message: Display the welcome message
 *
 * Return: Nothing.
 */
void read_message(char *filename)
{
	char c;
	FILE *fptr;

	fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
		return;
    }

    c = fgetc(fptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr);
    }
    fclose(fptr);
	printf("\n\n");
}


/**
 * print_result - Prints the result of the calculation
 *
 * @first: First number
 * @second: Second number
 * @operator: Operator
 * @result: Result of calculation
 *
 * Return: Nothing.
 */
void print_result(int first, int second, char operator, int result)
{
	int i, indent;
	char *spaces_before;
	int digits_first, digits_second, digits_result, num_digits;

	spaces_before = "                             ";
	digits_result = digit_count(result);
	digits_first = digit_count(first);
	digits_second = digit_count(second);
	num_digits = digits_result + digits_first + digits_second;
	indent = (40 - num_digits) / 2;

	printf("=================================================\n");

	for (i = 0; i <= indent; i++)
	{
		printf("%c", spaces_before[i]);
	}
	printf("%d  %c  %d  =  %d", first, operator, second, result);
	printf("\n");
	printf("=================================================\n");
}

/**
 * digit_count - Counts number of digit in an integer.
 *
 * @n: integer
 *
 * Return: Number of digits
 */
int digit_count(int n)
{
    if (n < 0) n = (n == INT_MIN) ? INT_MAX : -n;
    if (n < 10) return 1;
    if (n < 100) return 2;
    if (n < 1000) return 3;
    if (n < 10000) return 4;
    if (n < 100000) return 5;
    if (n < 1000000) return 6;
    if (n < 10000000) return 7;
    if (n < 100000000) return 8;
    if (n < 1000000000) return 9;
    /*      2147483647 is 2^31-1 - add more ifs as needed
       and adjust this final return as well. */
    return 10;
}
