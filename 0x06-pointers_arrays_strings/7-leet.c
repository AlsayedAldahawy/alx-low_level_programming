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

	char let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 'i', 'I', 'l', 'L'};
	char let_n[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != '\n')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = let_n[j];
			}
		}
		i++;
	}
	return (s);
}
