#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');

	while (i++ < n)
	{
		for (j = 0; j < i - 1; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
