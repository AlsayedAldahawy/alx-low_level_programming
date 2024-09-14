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
	unsigned long int m = n;
	int l = 0;

	while ((m >> 1) != 0)
	{
		m = m >> 1;
		l++;
	}
	while (l >= 0)
	{
		m = n;
		m = m >> l;
		m = m & 1;
		_putchar(m + '0');
		l--;
	}
}
