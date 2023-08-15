#include "main.h"
/**
 * print_last_digit - print the value of the last digit.
 *
 * @n: variable contains the argument value.
 *
 * Return: returns the last digit value value.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = n % 10;
	}
	else
	{
		last_digit = -n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
