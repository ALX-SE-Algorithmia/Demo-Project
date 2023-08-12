#include <stdlib.h>
#include <stdio.h>
#include "num_stack.h"


/**
 * create_num_stack - Create a new stack of operands.
 * Return: A pointer to the top of the stack.
 */
num_stack_t *create_num_stack()
{
	num_stack_t *stack;

	stack = malloc(sizeof(*stack));
	if (stack == NULL)
	{
		printf("Malloc failed");
		exit(1);
	}

	return (stack);
}


/**
 * push_num - Pushed an item to the top of the num_stack.
 * @top: A double poitner to the current top of the num_stack.
 * @n: the vlaue of the item to push on the num_stack.
 */
void push_num(num_stack_t **top, int n)
{
	num_stack_t *item;

	item = malloc(sizeof(*item));
	if (item == NULL)
	{
		printf("Malloc failed");
		exit(1);
	}

	item->next = *top;
	item->n = n;
	*top = item;
}


/**
 * pop_num - pop the top of the num_stack.
 * @top: A double pointer to the top of the num_stack.
 *
 * Return: Return A pointer to the new top of
 *         the num_stack.
 */
num_stack_t *pop_num(num_stack_t **top)
{
	num_stack_t *item;

	item = *top;
	if (*top && (*top)->next)
		*top = (*top)->next;

	return (item);
}
