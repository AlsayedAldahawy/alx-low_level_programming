#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 *
 * @a: first variable passed by reference.
 * @b: second variable passed by reference.
 *
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
