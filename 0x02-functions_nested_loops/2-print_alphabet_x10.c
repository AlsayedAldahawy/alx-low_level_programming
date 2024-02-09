#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase,
 * followed by a new line.
*/

void print_alphabet_x10(void)
{
	char i;
	int c = 10;

	while (c--)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
