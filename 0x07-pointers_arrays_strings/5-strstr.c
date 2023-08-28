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
	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0, k = i; needle[j]; j++, k++)
		{
			if (haystack[k] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
