#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of array of integers.
 * @a: array of integers
 * @n: is the number of elements of the array.
 * Return: pointer to the array after reverse.
*/

void reverse_array(int *a, int n)
{
	int i = 0, x;

	while (i < n / 2)
	{
		x = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = x;

		i++;
	}
}
