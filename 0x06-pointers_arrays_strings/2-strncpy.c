#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will copied from src.
 * Return: Returns a pointer to the resulting string dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
