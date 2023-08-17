#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		if (i != (n - 1))
			_putchar('\n');
		i++;
	}

	_putchar('\n');
}
