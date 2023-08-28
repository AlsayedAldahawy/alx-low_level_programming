#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: string to be scanned.
 * @needle: string containing the characters to find.
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;

	while (haystack[i] && needle[0])
	{
		for (j = 0; needle[j] && haystack[i] == needle[0]; j++)
		{
			continue;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}
	return (NULL);
}
