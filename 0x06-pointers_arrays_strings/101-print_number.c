#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
	int NumberOfDigits = 0, x, digit, divider = 1, i;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	/* claculating number of digits */
	for (NumberOfDigits = 1, x = n; (x / 10) > 0; NumberOfDigits++, x = (x / 10))
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
		  * printf("divider of %d = %d\n",n, divider);
		*/

		digit = (n / divider) % 10;
		_putchar(digit + '0');
	}
}
