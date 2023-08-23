#include "main.h"
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: Returns a 0 if equal, 1 if s1 > s2, -1 if s2 > s1.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (i + 1)
	{
		if (s1[i] > s2[i])
		{
			cmp = 1;
			break;
		}
		if (s1[i] < s2[i])
		{
			cmp = -1;
			break;
		}
		if (s1[i] == '\0' || s1[i] == '\0')
		{
			break;
		}

			i++;
	}

	return (cmp);
}
