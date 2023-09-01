#include "main.h"
/**
 * _isalpha - checks if the character is alphabet.
 *
 * @c: variable contains the character ASCII value.
 *
 * Return: (1) if alphabet , (0) if not an alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
