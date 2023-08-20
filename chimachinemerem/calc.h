#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <errno.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define PROMPT "===> "
#define DEL "\t' '\n"
#define MAX 100

extern char **environ;
void display();
void recieve_arg(char *buf);
void calculate(double num1, char *arg, double num2);
void error(char *var, int error_no);
void print(char *str);
void handler(int sig);
void execute(char *path);
void removechars(char *str, const char *c);
void check_command(char *buf_cpy, size_t *count, char *buf);
void convert_args(char **args);
#endif
