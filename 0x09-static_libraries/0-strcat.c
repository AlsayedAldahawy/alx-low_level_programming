#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: desstination string.
 * @src: source string.
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
