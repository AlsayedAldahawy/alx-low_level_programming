#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
