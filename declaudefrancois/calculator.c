#include <ctype.h>
#include  <math.h>
#include "num_stack.h"
#include "op_stack.h"
#include "calculator.h"


/**
 * calculate - Takes a operation description string as
 *             input and returns the result if the operation
 *             is valid.
 * @op: A char pointer containing a 'string' description of
 *      the operation to perform.
 *
 * Return: Int, the result of the operation.
 */
int calculate(char *op)
{
	int oplen, n;
	num_stack_t *nstack;
	op_stack_t *opstack, *cur_op;
	char cur;

	oplen = strlen(op);
	nstack = create_num_stack();
	opstack = create_op_stack();
	for (int i = 0; op[i] != '\0'; i++)
	{
		cur = op[i];
		if (isdigit(cur))
		{
			n = 0;
			while (isdigit(cur))
			{
				n = n * 10 + (cur - '0');
				i++;
				if (i < oplen)
					cur = op[i];
				else
					break;
			}
			i--;
			push_num(&nstack, n);
		}
		else if (cur == '(')
			push_op(&opstack, cur);
		else if (cur == ')')
		{
			while (opstack != NULL && opstack->op != '(')
				push_num(&nstack, evaluate(&nstack, &opstack));
			pop_op(&opstack);
		}
		else if (isOperator(cur))
		{
			while (opstack &&
			       precedence(cur) <= precedence(opstack->op))
				push_num(&nstack, evaluate(&nstack, &opstack));
			push_op(&opstack, cur);
		}
	}

	while (opstack && isOperator(opstack->op))
		push_num(&nstack, evaluate(&nstack, &opstack));
	return (nstack->n);
}


/**
 * evaluate - evaluates the result of operator
 *            applied on a and b.
 * @nstack: the operand stack.
 * @opstack: the operator stack.
 * Return: The result.
 */
int evaluate(num_stack_t **nstack, op_stack_t **opstack)
{
	int a, b;
	op_stack_t *op;

	a = pop_num(nstack)->n;
	b = pop_num(nstack)->n;
	op = pop_op(opstack);
	switch (op->op)
	{
		case '+':
			return (a + b);
		case '-':
			return (b - a);
		case '*':
			return (a * b);
		case '^':
			return pow(b, a);
		case '/':
			if (a == 0)
			{
				printf("Division by 0\n");
				exit(1);
			}
			return (b / a);
	}

	exit(1);
}


/**
 * precedence - Returns the precendente of an
 *              operator.
 *
 * @op: The operator.
 * Return: -1, 1, 2 or 3.
 */
char precedence(char op)
{
	switch (op)
	{
		case '+':
		case '-':
			return (1);
		case '*':
		case '/':
			return (2);
		case '^':
			return (3);
		default:
			return (-1);
	}
}


/**
 * isOperator - Checks if a char is an operator.
 * @op: The char to test.
 *
 * Return: 1 is valid otherwise 0.
 */
char isOperator(char op)
{
	if (op == '-' || op == '+' ||
	    op == '/' || op == '*' ||
	    op == '*' || op == '^')
		return (1);
	return (0);
}
