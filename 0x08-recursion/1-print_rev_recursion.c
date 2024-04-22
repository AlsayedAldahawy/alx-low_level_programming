#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 *
 * @s: pointer to string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/**
	 * this time we wan't to print in reverse, so the last letter
	 * should be printed before the next to the last .. etc
	 * so we use the recursion before _putchar
	*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
