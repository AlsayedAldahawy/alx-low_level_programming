#include "main.h"
#include <stdio.h>

/**
 * wildcmp -  a function that compares two strings.
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string).
 *
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: returns 1 if the strings can be considered identical,
 * otherwise return 0.
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' && *(s2 + 1) != '\0' && *s2 == '*')
	{
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
		{
			return (1);
		}
	}

	return (0);
}
