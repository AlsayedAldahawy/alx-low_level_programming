#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337.
 * @s: string to be converted.
 * Return: pointer to s.
 */
char *leet(char *s)
{
	int i = 0, j;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 'l', 'L', 't', 'T'};
	char l[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = l[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
