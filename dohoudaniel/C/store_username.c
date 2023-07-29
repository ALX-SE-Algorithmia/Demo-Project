#include <string.h>    /* The C standard file for strings */
#include <stdlib.h>    /* To use stanard library functions */
#include <unistd.h>  /* For the sleep() function */
#include <stdlib.h>  /* To include standard library functions */
#include <stdio.h>   /* To include standard input and output functions */

/**
 * storeUsername - Stores the username from standard input.
 * @username: The username from standard input.
 * @maxLength: Maximum length of username.
 *
 * Return: username
 */
void storeUsername(char *username, int maxLength)
{
	printf("Enter your username (max. of 25 chars): ");
	fgets(username, maxLength, stdin);
	/* Remove the trailing newline character */
	username[strcspn(username, "\n")] = '\0';
	sleep(3);
}
