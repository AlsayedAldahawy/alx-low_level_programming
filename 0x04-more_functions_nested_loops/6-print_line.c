#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
