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
	unsigned long int num = n;
	int shift = 0, digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 0)
	{
		num >>= 1;
		shift++;
	}

	for (; shift >= 0; shift--)
	{
		digit = (n >> shift) & 1;
		_putchar(digit + '0');
	}
}
