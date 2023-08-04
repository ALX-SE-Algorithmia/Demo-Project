#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "errorhandler.h"
/**
 *wrongInput
 *
 *Return: Always 0 (Success)
 */
void wrongInput(void)
{

	printf("WRONG INPUT: Please enter correct input\n");
	printf("eg : '+', '-', '*' or '/'\n");
}

/**
 *divisionByZero - prints division by zero is not possible
 *
 *Return: Always 0 (Success)
 */
void divisionByZero(void)
{

	printf("Error: Division By Zero Is Not Possuble\n");

}


