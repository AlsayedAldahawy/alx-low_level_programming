#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return:
 *   - On success,returns a pointer to the newly allocated concatenated string.
 *   - If the function fails, returns NULL.
 *
 * Description:
 *   - The returned pointer points to a newly allocated space in memory.
 *   - The concatenated string contains s1 followed by the first n bytes of s2.
 *   - The resulting string is null-terminated.
 *   - If n is greater than or equal to the length of s2,the entire s2 is used.
 *   - If NULL is passed for s1 or s2, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *ptr;

	if (!s1)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (!s2)
		len2 = 0;
	else
		len2 = strlen(s2);

	(n <= len2) ? (n = n) : (n = len2);

	ptr = malloc(sizeof(char) * (len1 + n + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + n] = '\0';

	return (ptr);
}
