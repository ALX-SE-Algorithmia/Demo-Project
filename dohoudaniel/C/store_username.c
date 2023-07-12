#include <string.h>    /* The C standard file for strings */
#include <stdlib.h>    /* To use stanard library functions */

/**
 * storeUsername - Stores the username from standard input.
 * @username: The username from standard input.
 * maxLength: Maximum length of username.
 *
 * Return: username
 */
void storeUsername(char *username, int maxLength)
{
	printf("Enter your username (max. of 50 chars): ");
	fgets(username, maxLength, stdin);
	username[strcspn(username, "\n")] = '\0';  /* Remove the trailing newline character */
}
