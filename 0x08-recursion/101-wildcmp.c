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
	/* Base case: both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	/* If s2 starts with '*', recursively check if the rest of s1 and s2 match */
	if (*s2 == '*')
	{
		/*Try matching s1 with and without the first character of s2*/
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/*If s2 does not start with '*', compare the first characters of s1 and s2*/
	if (*s1 != '\0' && *s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/*If none of the above conditions match, the strings are not identical*/
	return (0);
}
