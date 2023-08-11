#include <stdio.h>
/**
 * main - program prints digits of base 16.
 * Return: return 0 at success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
