#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: the number of characters in the initial segment of s
 * which consist only of characters from accept.
*/


unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0, j;
	unsigned int counter = 0;

	while (s[i] && (s[i] != ' '))
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
		}
		i++;
	}
	return (counter);
}
