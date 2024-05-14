#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if malloc fails.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	ptr = malloc((sizeof(char) * i));

	if (!ptr)
		return (NULL);

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}
