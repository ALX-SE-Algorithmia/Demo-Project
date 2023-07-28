#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <error.h>
#include "error_handler.h"
#include <unistd.h>
#include <ctype.h>
#include <string.h>
/* #include <windows.h> */

double add(double first, double second);
double subtract(double first, double second);
double multiply(double first, double second);
double divide(double dividend, double divisor);
double logarithm(double num);

/*Add Calculating Functions Prototypes In Here*/

#endif
