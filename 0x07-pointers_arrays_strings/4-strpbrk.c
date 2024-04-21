#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string containing the characters to find.
 * Return: Returns a pointer to the byte in s
 * that matches one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return ((s + i));
			}
		}
		i++;
	}
	return (NULL);
}
