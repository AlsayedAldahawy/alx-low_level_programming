#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -  a function that prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line.
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			c++;
		}
		
		_putchar(c++);
	}
	_putchar('\n');
}
