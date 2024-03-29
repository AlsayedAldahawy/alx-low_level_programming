#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : number to find its last digit.
 * Return: the last digit.
*/

int print_last_digit(int n)
{
	long last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');
	return (last_digit);
}
