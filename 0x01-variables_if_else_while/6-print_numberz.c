#include <stdio.h>
/**
 * main - program prints digits of base 10.
 * Return: return 0 at success
 */
int main(void)
{
	int c = 48;

	while (c <= '9')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
