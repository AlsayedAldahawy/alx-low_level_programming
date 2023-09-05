#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @str: string to be copied.
 *
 * Return: NULL if str = NULL.
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 *
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (int)sizeof(str); i++)
	{
		if (i == (int)sizeof(str))
		{
			*(ptr + i) = '\0';
			return (ptr);
		}
		ptr[i] = str[i];
	}
	return (NULL);
}
