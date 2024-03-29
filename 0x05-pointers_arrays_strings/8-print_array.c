#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @n: is the number of elements of the array to be printed
 * @a: array of integers
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");

		i++;
	}
	printf("\n");
}
