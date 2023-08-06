#include "stack.h"


/**
 * push - Pushed an item to the top of the stack.
 * @top: A double poitner to the current top of the stack.
 * @item: the item to push on the stack.
 */
void push(stack_t **top, stack_t *item)
{
	item->next = *top;
	*top = item;
}


/**
 * pop - pop the top of the stack.
 * @top: A double pointer to the top of the stack.
 *
 * Return: Return A pointer to the new top of
 *         the stack.
 */
stack_t *pop(stack_t **top)
{
	stack_t *item;

	item = *top;
	if (*top && (*top)->next)
		*top = (*top)->next;

	return (item);
}
