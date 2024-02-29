#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be used from src.
 * Return: Returns a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
