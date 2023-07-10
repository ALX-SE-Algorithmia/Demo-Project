#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

/* Basic Calculator Functions */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int division(int a, int b);
int mod(int a, int b);

/* Special Calculator Functions */
double square(double x);
double cosine(double x);
double sine(double x);
double logarithm(double x);
double expon(double base, double exp);

#endif /* MAIN_H */
