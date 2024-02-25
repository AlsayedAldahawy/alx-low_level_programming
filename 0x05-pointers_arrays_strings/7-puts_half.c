#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * The function should print the second half of the string
 * If the number of characters is odd, the function
 * should print the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2
 * @str: pointer to a string
*/

void puts_half(char *str)
{
	int len = 0;

	for (len = 0; str[len]; len++)
		;

	for (len = (((len - 1) / 2) + 1); str[len]; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
