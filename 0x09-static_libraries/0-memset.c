#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @n: number of bytes of the memory area pointed to by s to be filled.
 * @b: charachter to be filled with.
 * Return: a pointer to the memory area s.
 * @s: pointer to the memory area.
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
