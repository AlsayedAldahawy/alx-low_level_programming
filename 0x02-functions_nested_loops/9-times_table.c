#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	short a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (a * b > 9)
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				b != 0 ? _putchar(' ') : (b = b);
				_putchar((a * b) + '0');
			}
		}
		_putchar('\n');
	}
}
