#include "main.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: string
 * Return: pointer to s.
 */

char *cap_string(char *s)
{
	int i = 0, count = 0, sep_count = 0;
	char sep[13] = {10, 46, 59, 44, 33, 63, 34, 40, 41, 123, 125, 32, 9};


	while (s[i] != '\0')
	{
		for (count = 0; count <= 12; count++)
		{
			if (s[i] == sep[count])
			{
				sep_count = 1;
			}
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			sep_count = 0;
		}
		if (s[i] >= 'a' && s[i] <= 'z' && sep_count == 1)
		{
			s[i] = s[i] - 32;
			sep_count = 0;
		}
		i++;
	}
	return (s);
}
