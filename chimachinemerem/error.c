#include "calc.h"

/**
 * error - This function assigns error according to number given
 * @var: argument passed
 * @error_no: error number
 */

void error(char *var, int error_no)
{
	switch (error_no)
	{
		case 1:
			fprintf(stderr, "Unrecognised Command %s\n", var);
			break;
		case 2:
			fprintf(stderr, "Unrecognised Operator! %s\n", var);
			break;
		case 3:
			fprintf(stderr, "[%s] Invalid number!\n", var);
			break;
		case 4:
			perror("Error: ");
			break;
	}
}
