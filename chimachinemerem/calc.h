#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/**
 * struct sg - Struct op
 *
 * @op: The operator
 * @n: ranking symbols in other of importance
 * @f: The function associated
 */
typedef struct sign
{
	char *s;
	int n;
	float(*f)(float a, float b);
}sg_t;

/**
 * struct inputs - accepts numbers and inputs
 * @sym: symbols
 * @num: numbers
 */

typedef struct inputs
{
	char *sym;
	float num;
} input_t;

extern char **environ;
void display();
void recieve_arg(char *buf);
void calculate_input(float num, input_t *args, sg_t *op, int t);
void sort_args(char **args);
void error(char *var, int error_no);
int operation(sg_t *op, char *sym, int flag);
void print(char *str);
float add(float a, float b);
float mul(float a, float b);
float sub(float a, float b);
float divs(float a, float b);
void handler(int sig);
void sort_args(char **args);
void execute(char *path);
void removechars(char *str, char *c);
#define PROMPT "===> "
#define DEL "\t' '\n"
#define MAX 100
#endif
