#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
	int NumberOfDigits = 0, x, digit, divider, i;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = (n * -1);
	}
	else
		num = n;

	/* claculating number of digits */
	for (NumberOfDigits = 1, x = num; (x / 10) > 0; NumberOfDigits++, x = (x / 10))
	;

	/*_putchar('@');*/
	/*_putchar(NumberOfDigits + '0');*/
	/*_putchar('@');*/

	for (NumberOfDigits = NumberOfDigits; NumberOfDigits > 0; NumberOfDigits--)
	{
		divider = 1;
		for (i = NumberOfDigits - 1; i > 0; i--)
		{
			divider = divider * 10;
		}

		/**
		  * checking divider values.
		  * printf("divider of %d = %d\num",num, divider);
		*/

		digit = (num / divider) % 10;
		_putchar(digit + '0');
	}
}
