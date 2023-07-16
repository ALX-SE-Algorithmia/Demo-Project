#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/* Function declartions */
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double division(double a, double b);
int mod(int a, int b);

/* Scientific function declartions */
double root(double num, double root);
double exponent(double base, double exp);
double logten(double a);
int factorial(int a);
int fib(int n);

/* Validator function declarations*/
bool is_int(double num);
bool val_input(double num_1, double num_2);
bool val_single_input(double num);

/* Calculator function declarations */
void two_operand_calc(double a, double b, int choice);
void single_operand_calc(double a, int choice);
void special_calc(int choice);

#endif /* CALC_H */
