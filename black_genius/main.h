#ifndef MAIN_H
#define MAIN_H

typedef struct {
	char op;
	void (*function) (int, int);
} operation_t;

void addition(int first_operand, int second_operand);
void multiply(int first_operand, int second_operand);
void divide(int first_operand, int second_operand);
void subtract(int first_operand, int second_operand);
void (*get_calc(char *prompt))(int, int);
int validate(char *input, int *is_valid);

#endif /* MAIN_H */
