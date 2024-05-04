#include "main.h"
#include <stddef.h>
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
	int i = 0;
	char *ptr = NULL;

	while (*(s + i))
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	if (c == '\0')
		return (s + i);

	return (ptr);
}
