#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed.
 */
void print_number(int n)
{
	int i, xDigit, digit, firstDigitFlag = 0;
	unsigned int N = n;

	if (n < 0)
	{
		_putchar('-');
		N = -N;
	}

	if (N == 0)
	{
		_putchar('0');
	}

	for (i = 0, xDigit = 1000000000; i <= 10 && xDigit > 0; i++, xDigit /= 10)
	{
		digit = (N / xDigit) % 10;

		if (digit > 0)
		{
			firstDigitFlag = 1;
		}

		if (firstDigitFlag)
		{
			_putchar(digit + '0');
		}
	}
}
