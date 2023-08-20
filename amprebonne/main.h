#ifndef MAIN_H
#define MAIN_H

#include <stdbool.h>

void printIntro(void);
void artDisplay(void);

bool isValidOperator(char op);
int checker(float *operand1, float *operand2, char *op);
int mathsFunction(float operand1, float operand2, char op);

#endif // MAIN_H
