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
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
