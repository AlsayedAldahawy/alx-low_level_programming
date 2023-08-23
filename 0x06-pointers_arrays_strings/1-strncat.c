#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes will be used from src.
 * Return: Returns a pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while ((*(dest + dest_len) != '\0'))
	{
		dest_len++;
	}

	while (src_len < n)
	{
		if (*(src + src_len) == '\0')
			break;
		*(dest + dest_len + src_len) = *(src + src_len);
		src_len++;
	}
	*(dest + dest_len + n) = '\0';

	return (dest);
}
