#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: pointer to character.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/**
	 * *s points to the first character in the string
	 * every time we use the recursion we increment the pointer by 1
	 * which will make it move 1 byte(char) forward to point to next character
	*/

	_putchar(*s);
	_puts_recursion(s + 1);
}
