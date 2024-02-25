#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to a string
*/

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
