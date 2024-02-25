#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to a variable of type int
 * @b: pointer to a variable of type int
*/

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
