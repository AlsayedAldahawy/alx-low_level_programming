#include <stdio.h>
/**
 * main - program prints digit numbers.
 * Return: return 0 at success
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
