#ifndef CAL_H
#define CAL_H

/* INCLUDE HEADER FILES */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <stddef.h>
#include <stdbool.h>
#include <math.h>

/* FUNCTIONS PROTOTYPES */
void welcome_prompt(void);
double operation(double num1, double num2, char operator);
void calculation(double result);
int display_prompt_again(void);
char getOperator(void);
double getNumber(void);

#endif /* CAL_H */
