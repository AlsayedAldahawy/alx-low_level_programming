#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					if ((i + j + k + l) != 19)
					{
						_putchar('\n');
					}
				}
			}
		}
	}
}
