#ifndef NUM_STACK_H
#define NUM_STACK_H


/**
 * struct num_stack_s - operand stack.
 * @n: int, the value of an operand.
 * @next: points to the next element of the num_stack.
 *
 * Description: Stack dsa for holding the operand of
 *              the calculator.
 */
typedef struct num_stack_s
{
	int n;
	struct num_stack_s *next;
} num_stack_t;

num_stack_t *pop_num(num_stack_t **);
void push_num(num_stack_t **, int);
num_stack_t *create_num_stack();

#endif /* NUM_STACK_H */
