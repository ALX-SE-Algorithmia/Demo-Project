#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int handle_calc(int first_number, int second_number, char *operator);

int sum(int first_number, int second_number);
int minus(int first_number, int second_number);
int multiply(int first_number, int second_number);
int divide(int first_number, int second_number);

#endif
