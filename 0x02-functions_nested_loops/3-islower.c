#include "main.h"
/**
 * _islower - checks if the character is lowercase.
 * Return: (1) if lowercase , (0) if not a lower case.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
