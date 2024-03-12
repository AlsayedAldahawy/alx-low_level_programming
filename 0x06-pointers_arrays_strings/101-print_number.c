#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an integer.
 * @n: number to be printed.
 */
void print_number(int n)
{
	int digitsNumber = 0, x, digit, divider, i;
	unsigned int num = n, reminder;

	if (n < 0)
	{
		_putchar('-');
		reminder = (n % 10) * -1;
		num = ((n / 10) * -1);
		num = (num * 10) + reminder;
	}

	/* checking num values. */
	/* printf("num of %d = %d\n",n, num); */

	/* claculating number of digits */
	for (digitsNumber = 1, x = num; (x / 10) > 0; digitsNumber++, x = (x / 10))
	;

	/*_putchar('@');*/
	/*_putchar(digitsNumber + '0');*/
	/*_putchar('@');*/

	for (digitsNumber = digitsNumber; digitsNumber > 0; digitsNumber--)
	{
		divider = 1;
		for (i = digitsNumber - 1; i > 0; i--)
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
