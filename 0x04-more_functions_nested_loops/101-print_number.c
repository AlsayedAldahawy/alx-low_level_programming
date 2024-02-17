#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed.
 */
void print_number(int n)
{
	int i, x, d, firstDigit = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = 0, x = 1000000000; i <= 10 && x > 0; i++, x /= 10)
	{
		d = (n / x) % 10;

		if (d > 0)
		{
			firstDigit = 1;
		}

		if (firstDigit)
		{
			_putchar(d + '0');
		}
	}
}
