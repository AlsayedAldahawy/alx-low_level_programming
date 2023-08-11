#include <stdio.h>
/**
 * main - program prints digit numbers.
 * Return: return 0 at success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
