#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
typedef long double (*foperator_t)(long double a, long double b);
typedef struct operations_s
{
        char *operation;
        foperator_t f;
}
operations_t;

long double divide(long double a, long double b);

long double mul(long double a, long double b);

long double add(long double a, long double b);

long double sub(long double a, long double b);

long double power(long double a, long double b);

long double modulo(long double a, long double b);



long double get_num(void);

foperator_t get_op(void);

#endif
