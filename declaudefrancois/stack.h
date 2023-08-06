#ifndef CALC_H
#define CALC_H


/**
 * struct stack_s - operand stack.
 * @v: float, the value of an operand.
 * @next: points to the next element of the stack.
 *
 * Description: Stack dsa for holding the operand of
 *              the calculator.
 */
typedef struct stack_s
{
	float v;
	struct stack_s *next;
} stack_t;

stack_t *pop(stack_t **);
void push(stack_t **, stack_t *);

#endif /* CALC_H */
