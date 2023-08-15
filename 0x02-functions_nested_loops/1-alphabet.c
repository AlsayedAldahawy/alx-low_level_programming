#include "main.h"
/**
 * print_alphabet - function prints all the lowercase alphabets.
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
