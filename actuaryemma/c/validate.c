#include "cal.h"

int validate_input(const char *prompt, const char *format, void *data)
{
	int valid_input;
	while (printf("%s", prompt) && (valid_input = scanf(format, data)) != 1)
	{
		printf("Error: Invalid input.\n");
		while (getchar() != '\n');
	}
	return valid_input;
}
