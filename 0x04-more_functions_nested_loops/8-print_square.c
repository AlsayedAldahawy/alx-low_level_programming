#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: the size of the square.
 */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		if (i != (size - 1))
			_putchar('\n');
		i++;
	}

	_putchar('\n');
}
