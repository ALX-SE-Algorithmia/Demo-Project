#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <math.h>
#define PI 3.1415926535
/**
 * struct calc_operation_s - this is a struct that holds
 * calculator operations and their corresponding functions
 * @op_str: the operation string
 * @op_function: the operation function
 */
typedef struct calc_operation_s
{
	char *op_str;
	double (*op_function)(double num1, double num2);
} calc_op_t;
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double root(double num1, double num2);
double power(double num1, double num2);
double sin_func(double num1, double num2);
double cos_func(double num1, double num2);
double tan_func(double num1, double num2);
double execute_operation(double num1, double num2, char *operation);
double validate_numbers(char *num_str, char *op_str);
void print_thank_you(int new_line);
void again_message(void);
char *validate_operator(void);
void strip(char *string);
int check_trig(char *operator);
void welcome(void);
void print_sleep(char *message);
#endif
