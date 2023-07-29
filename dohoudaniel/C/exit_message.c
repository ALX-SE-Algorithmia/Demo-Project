#include "main.h"
#include <string.h>    /* To handle string operations */
#include <stdio.h>    /* Ti handle standard input and output */
#include <unistd.h>  /* For the sleep function */
#include <stdlib.h>  /* To include standard library functions */

/**
 * exitMessage - Prints exit message.
 *
 * Return: Exit message.
 */
void exitMessage(void)
{
	/* Prints this message when the calculation is done. */
	printf("\n\nThank you for this basic calculator.\n");
	sleep(2);
	printf("Recompile to use again...\n");
	sleep(1.75);
}
