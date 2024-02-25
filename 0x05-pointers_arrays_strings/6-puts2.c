#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to a string
*/

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
