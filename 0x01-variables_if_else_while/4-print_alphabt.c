#include <stdio.h>
/**
 * main - program prints lowercase alphabet except q and e.
 * Return: return 0 at success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (!(c == 'q' || c == 'e'))
		{
			putchar(c);
			c = c + 1;
		}
		else
			c++;
	}
	putchar('\n');
	return (0);
}
