#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to a string
*/

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
