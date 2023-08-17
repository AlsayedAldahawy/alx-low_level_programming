#include "main.h"

/**
 * _isdigit - check if a character is a digit or not.
 * @c: int variable contains the ASCII character value.
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
