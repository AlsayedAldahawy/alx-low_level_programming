#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: The returned pointer should point to
 * a newly allocated space in memory
 * which contains the contents of s1, followed
 * by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 1;
	char *ptr;

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != NULL)
	{
		size2 = 0;
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i == size1 + size2)
		{
			ptr[i] = '\0';
			return (ptr);
		}

		if (i < size1)
		{
			ptr[i] = s1[i];
			continue;
		}
		ptr[i] = s2[i - size1];
	}
	return (NULL);
}
