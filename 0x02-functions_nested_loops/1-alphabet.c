#include "main.h"
/**
 * main - entry point.
 * Return: return 0 at success.
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
