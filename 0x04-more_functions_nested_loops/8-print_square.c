#include "main.h"
#include <stdio.h>

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: is the size of the square
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');

	while (i++ < size)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
