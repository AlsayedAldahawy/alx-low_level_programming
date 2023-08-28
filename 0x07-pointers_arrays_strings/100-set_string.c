#include "main.h"
#include <stdio.h>

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to string.
 * @to: string to set the pointer with.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
