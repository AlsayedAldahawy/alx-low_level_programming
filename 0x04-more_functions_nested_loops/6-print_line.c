#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
