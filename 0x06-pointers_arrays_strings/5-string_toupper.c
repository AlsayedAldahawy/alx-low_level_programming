#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase.
 * @s: string.
 * Return: returns a pointer to the resulting string.
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		(s[i] > 'a' && s[i] < 'z') ? (s[i] -= 32) : (s[i] += 0);
		i++;
	}
	return (s);
}
