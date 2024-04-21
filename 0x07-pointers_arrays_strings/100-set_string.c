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

	/*
	 * strings are immutable in C, so we can't change it's value once it is
	 * created, all we did in this task is re-assigning the pointer *s to the
	 * string 'to' location in the memory. so now both *to and *s refer to
	 * the same string
	*/
}
