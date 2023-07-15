#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Function declartions */
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);
int mod(int a, int b);

/* Scientific function declartions */
double root(double num, double root);
double logten(double a);
double exponent(double base, double exp);
int factorial(int a);
int fib(int a);

#endif /* CALC_H */