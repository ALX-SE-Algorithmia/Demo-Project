#ifndef MAIN_H
#define MAIN_H

#define PASS 0
#define FAIL -99
#define INVALID_OPCODE -98

#include <stdio.h>
#include <stdlib.h>

void start_screen();
void get_operands(int *num_one, int *num_two);
int perform_operation(int num_one, int num_two, char opcode);
char get_opcode();
int check_dividend(int num_two);

#endif
