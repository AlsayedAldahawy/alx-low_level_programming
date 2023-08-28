#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: specifies the pointer to the null-terminated string
 * in which the search is to be performed.
 * @c: specifies the character to be searched.
 * Return: a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *ptr = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (ptr);
}
