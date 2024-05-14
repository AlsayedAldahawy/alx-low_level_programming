#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A pointer to the concatenated string, or NULL if malloc fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k;

	for (i = 0; s1 && s1[i]; i++)
		;

	for (j = 0; s2 && s2[j]; j++)
		;

	ptr = malloc(sizeof(char) * (i + j) + 1);

	if (!ptr)
		return (NULL);

	for (k = 0, i = 0; s1 && s1[i]; k++, i++)
		ptr[k] = s1[i];

	for (k = k, j = 0; s2 && s2[j]; k++, j++)
		ptr[k] = s2[j];

	ptr[k] = '\0';

	return (ptr);
}
