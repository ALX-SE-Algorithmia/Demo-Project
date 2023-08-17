#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "op_stack.h"
#include "num_stack.h"

#define INPUT_BUFF_SIZE 200

int calculate(char *op);
char precedence(char op);
char isOperator(char op);
int evaluate(num_stack_t **nstack, op_stack_t **opstack);
#endif /* CALC_H */
