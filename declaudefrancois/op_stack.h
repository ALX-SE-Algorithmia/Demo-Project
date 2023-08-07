#ifndef OP_STACK_H
#define OP_STACK_H

/**
 * struct op_stack_s - operators stack.
 * @op: the operator symbol.
 * @next: points to the next element of the stack.
 *
 * Description: Stack dsa for holding the operand of
 *              the calculator.
 */
typedef struct op_stack_s
{
	char op;
	struct op_stack_s *next;
} op_stack_t;

op_stack_t *pop_op(op_stack_t **);
void push_op(op_stack_t **, char);
op_stack_t *create_op_stack();

#endif /* OP_STACK_H */
