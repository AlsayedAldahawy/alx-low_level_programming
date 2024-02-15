#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	char c, i = 0, j;

	while (i++ <= 9)
	{
		j = 0;
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('1');
				j = 10;
			}
			_putchar(c - j + '0');
		}
		_putchar('\n');
	}
}
