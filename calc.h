#ifndef _CALC_H
#define _CALC_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

float add1(float a, float b);
float sub1(float a, float b);
float mul1(float a, float b);
float div1(float a, float b);
float exp1(float a, float b);
float mod1(float a, float b);
void func_sel(char *c, float a, float b);
float mul_exp(char *c, float a, float b);

#endif