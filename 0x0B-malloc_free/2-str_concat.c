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
	int i, j, size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		size1 = 0;
	}
	else
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 == NULL)
	{
		size2 = 1;
	}
	else
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}
	ptr = malloc(size1 + size2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = i; j < size1 + size2 + 1; j++)
	{
		ptr[j] = s2[j - i];
		if (ptr[j] == '\0')
			return (ptr);
	}
	return (NULL);
}
