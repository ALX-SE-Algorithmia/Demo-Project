#include <stdlib.h>
#include <stdio.h>
#include "op_stack.h"


/**
 * create_op_stack - Create a new stack of operands.
 * Return: A pointer to the top of the stack.
 */
op_stack_t *create_op_stack()
{
	op_stack_t *stack;

	stack = malloc(sizeof(*stack));
	if (stack == NULL)
	{
		printf("Malloc failed");
		exit(1);
	}

	return (stack);
}


/**
 * push_op - Pushed an item to the top of the stack.
 * @top: A double poitner to the current top of the stack.
 * @op: the value of the item to push on the stack.
 */
void push_op(op_stack_t **top, char op)
{
	op_stack_t *item;

	item = malloc(sizeof(*item));
	if (item == NULL)
	{
		printf("Malloc failed");
		exit(1);
	}

	item->next = *top;
	item->op = op;
	*top = item;
}


/**
 * pop_op - pop the top of the stack.
 * @top: A double pointer to the top of the stack.
 *
 * Return: Return A pointer to the new top of
 *         the stack.
 */
op_stack_t *pop_op(op_stack_t **top)
{
	op_stack_t *item;

	item = *top;
	if (*top && (*top)->next)
		*top = (*top)->next;

	return (item);
}
