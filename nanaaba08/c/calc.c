#include "main.h"
#include <stdio.h>

/**
  * add - add two integers and return the result
  * @num1: number being added
  * @num2: number being added
  * Return: Always 0.
  */
int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
  * sub - subtract two integers and return the result
  * @num1: number to subtract
  * @num2: number to subtract
  * Return: 0
  */
int sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
  * mul - multiply two integers and return the result
  * @num1: number to multiply
  * @num2: second number to multiply
  * Return: 0
  */
int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
  * div - divide two integers and return the result
  * @num1: number to divide
  * @num2: number to divide
  * Return: 0
  */
int div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error: Cannot divide by zero\n");
	}
	return (num1 / num2);
}
