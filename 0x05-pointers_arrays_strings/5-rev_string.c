#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: pointer to a string
*/

void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	for (len = 0; s[len]; len++)
		;

	len--;

	for (i = 0; i <= len / 2; i++)
	{
		temp = s[len - i];
		s[len - i] = s[i];
		s[i] = temp;
	}
}
