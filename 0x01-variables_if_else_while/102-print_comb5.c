#include <stdio.h>
/**
 * main - program prints combinations of two two-digits.
 * Return: return 0 at success
 */
int main(void)
{
	int a1 = '0';
	int a2;
	int b1;
	int b2;

	while (a1 <= '9')
	{
		a2 = '0';
		while (a2 <= '9')
		{
			b1 = '0';
			while (b1 <= '9')
			{
				b2 = '0';
				while (b2 <= '9')
				{
					if (!(a1 >= b1 && a2 >= b2))
					{
						putchar(a1);
						putchar(a2);
						putchar(' ');
						putchar(b1);
						putchar(b2);
						putchar(',');
						putchar(' ');
					}
					b2++;
				}
				b1++;
			}
			a2++;
		}
		a1++;
	}
	putchar('\n');
	return (0);
}
