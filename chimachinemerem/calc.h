#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
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
	char *op;
	int num;
	double (*f)(double a, double b);
}sg_t;
extern char **environ;
void display();
void print(char *str);
void handler(int sig);
void execute(char *path);
void removechars(char *str, char *c);
#define PROMPT "===> "
#define DEL "\t' '\n"
#define MAX 100
#endif
