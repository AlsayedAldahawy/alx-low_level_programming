#include <stdio.h>
/**
 * main - program prints lowercase alphabet.
 * Return: return 0 at success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
