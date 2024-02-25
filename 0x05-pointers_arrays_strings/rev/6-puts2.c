#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: string passed by reference.
 *
 *
*/

void puts2(char *str)
{

	int i = 0, len;

	while (*(str + i) != '\0')
	{

		i++;
	}

	len = --i;
	i = 0;

	while (i <= len)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
