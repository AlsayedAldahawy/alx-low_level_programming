#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: string passed by reference.
 *
 *
*/

void puts_half(char *str)
{

	int i = 0, len;

	while (*(str + i) != '\0')
	{

		i++;
	}

	len = --i;
	i = 0;

	while (i <= len / 2)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
