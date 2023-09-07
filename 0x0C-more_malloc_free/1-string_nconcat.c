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
	unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0;

	while (s1 && s1[len_1])
		len_1++;
	while (s2 && s2[len_2])
		len_2++;

	if (n >= len_2)
		ptr = malloc(sizeof(char) * (len_1 + len_2 + 1));
	else
		ptr = malloc(sizeof(char) * (len_1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len_1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < len_2 && i < (len_1 + n))
		ptr[i++] = s2[j++];

	while (n >= len_2 && i < (len_1 + len_2))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
