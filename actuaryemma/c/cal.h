#ifndef CAL_H
#define CAL_H
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
float sum_0(float a, float b);
double sum_1(double a, double b);
int sub(int a, int b);
float sub_0(float a, float b);
double sub_1(double a, double b);
int mul(int a, int b);
float mul_0(float a, float b);
double mul_1(double a, double b);
int division(int a, int b);
float division_0(float a, float b);
double division_1(double a, double b);
int validate_input(const char *prompt, const char *format, void *data);

#endif
