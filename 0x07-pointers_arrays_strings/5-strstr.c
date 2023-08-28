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
	int i = 0, j, k, found = 0;

	while (haystack[i])
	{
		for (j = 0, k = i; needle[j]; j++, k++)
		{
			if (haystack[k] != needle[j])
			{
				found = 0;
				break;
			}
			found = 1;
		}
		if (found)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
