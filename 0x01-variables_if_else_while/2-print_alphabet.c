#include <stdio.h>
/**
 * main - program prints lowercase alphabet.
 * Return: return 0 at success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
