#include <stdio.h>
/**
 * main - program prints combinations of three digits.
 * Return: return 0 at success
 */
int main(void)
{
	int c = '0';
	int g;
	int k;

	while (c <= '9')
	{	g = c + 1;

		while (g <= '9')
		{
			k += g;
			while (k <= '9')
			{
				putchar(c);
				putchar(g);
				putchar(k);
				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			g++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
