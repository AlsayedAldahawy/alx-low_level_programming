#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of letters used from S2
 *
 * Return: The returned pointer shall point to
 * a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size, i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		while (s1[len1])
		len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
		len2++;
	}

	if (n >= len2)
	{
		size = len1 + len2 + 1;
	}
	else
	{
		size = len1 + n + 1;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
		if (ptr == NULL)
			return (NULL);
	size--;
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < size; j++, i++)
	{
		ptr[i] = s2[j];
	}

	ptr[i] = '\0';
	return (ptr);
}
