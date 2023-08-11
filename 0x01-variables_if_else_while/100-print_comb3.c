#include <stdio.h>
/**
 * main - program prints combinations of two digits.
 * Return: return 0 at success
 */
int main(void)
{
	int c = '0';
	int g;

	while (c <= '9')
	{	g = c + 1;

		while (g <= '9')
		{
			putchar(c);
			putchar(g);
			if (c != '8')
			{
				putchar(',');
				putchar(' ');
			}
			g++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
