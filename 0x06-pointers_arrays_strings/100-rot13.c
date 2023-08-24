#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string to be encoded.
 * Return: pointer to s.
 */

char *rot13(char *s)
{
	int i = 0, j;

	char rot_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (s[i] != '\0')
	{
		for (j = 0; rot_1[j] != '\0'; j++)
		{
			if (s[i] == rot_1[j])
			{
				s[i] = rot_2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
