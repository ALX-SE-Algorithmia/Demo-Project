#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define INPUT_BUFF_SIZE 200

float calculate(char *op);
char isValid(char *op);
char precedence(char op);
char isOperator(char op);
char isValid(char *op);
char isFloat(char *op);
char precedence(char op);
char isOperator(char op);
float evaluate(float a, float b, char c);

#endif /* CALC_H */
