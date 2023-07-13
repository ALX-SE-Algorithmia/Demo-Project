#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
 * OperandChoice - Structure representing the choice of operands
 *
 * @operand:      The selected operand
 * @name:         The name associated with the choice
 * @first_number: The first number for the operation
 */

typedef struct
{
	int operand;
	char name[50];
	double first_number;
} OperandChoice;


double BasicOp(double first_num, double second_num, int operand);
double AdvancedOp(double first_number);
OperandChoice getOperandChoice(void);


#endif
