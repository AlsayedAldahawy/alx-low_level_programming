#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
	/**
	 * using recursion
	*/

	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
