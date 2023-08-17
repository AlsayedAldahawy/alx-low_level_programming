#include "main.h"
#include <stdio.h>

/**
 * print_number - function that prints an integer.
 *
 * @n: number to be printed
 *
*/

void print_number(int n)
{
	unsigned int i;
	int digit;
	int start_digit = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	for (i = 1000000000; i >= 1 ; i = i / 10)
	{

		if ((n / i == 0) && (start_digit == 0) && (i != 1))
			continue;

		digit = (n / i) % 10;
		_putchar(digit + '0');
		start_digit = 1;
	}
}
