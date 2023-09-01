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
	int src_len = 0;

	while (src_len < n)
	{
		if (*(src + src_len) == '\0')
			break;
		*(dest + src_len) = *(src + src_len);
		src_len++;
	}
	while (src_len < n)
	{
		*(dest + src_len) = '\0';
	src_len++;
	}

	return (dest);
}
