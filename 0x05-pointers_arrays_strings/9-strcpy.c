#include "main.h"
#include <stdio.h>
/**
 * _strcpy- a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: buffer
 * @src: string
 * Return: Return value the pointer to dest
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0, len;

	while (*(src + i) != '\0')
	{

		i++;
	}
	len = i;
	i = 0;

	while (i < len)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
