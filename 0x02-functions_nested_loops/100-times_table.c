#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int x, y, z;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;

				if (z >= 10)
				{
					_putchar(((z / 10) % 10) + '0');
				}
				_putchar((z % 10) + '0');

				if (y != n)
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
}
