#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int x = 0, y = 0, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z >= 10)
			{
				_putchar(((z / 10) % 10) + '0');
			}
			_putchar((z % 10) + '0');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');

				if ((x * (y + 1)) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}


}
