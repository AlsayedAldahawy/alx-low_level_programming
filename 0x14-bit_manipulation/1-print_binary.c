#include <stdio.h>
#include "main.h"

/**
 * print_binary -  a function that prints the binary
 * representation of a number.
 * @n: number
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n, mask = 1;
	int len = 0, digit;

	printf("len = %i\n", len);

	if (n == 0)
		_putchar('0');

	while (num > 0)
	{
		num >>= 1;
		mask = mask * 2;
		len++;
	}

	for (len = len, mask = mask / 2; len > 0; len--, mask /= 2)
	{
		digit = n & mask;
		if (digit == 0)
		{
			_putchar('0');
		}
		else
			_putchar('1');
	}
}
