#include "main.h"

/**
 * _isupper - check if a character is upper-case alpabet or not.
 * @c: char variable contains the character value.
 * Return: 1 if c is upper-case, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
