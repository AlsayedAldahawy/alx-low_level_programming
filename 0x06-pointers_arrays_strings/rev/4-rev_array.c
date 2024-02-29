#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: array
 * @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i = 0, swap;

	if (n > 1)
	{
		while (i <= (n / 2))
		{
			swap = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = swap;
			i++;
		}
	}
}
