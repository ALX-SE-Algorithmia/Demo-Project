#include <stdbool.h>
#include "calc.h"
/**
 *  check if the good operator
 *  @c: char
 *  
 *  Return: bool
 */
bool isdiff(char c)
{
	if(c != '+' || c != '/' || c!= '*' || '-')
	{
		return true;
	}
	return false;
}
