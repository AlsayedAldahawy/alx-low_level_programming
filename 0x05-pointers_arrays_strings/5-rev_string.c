#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 *
 * @s: string passed by reference.
 *
 *
*/

void rev_string(char *s)
{

	int i = 0, len, len2;
	char c;

	while (*(s + i) != '\0')
	{

		i++;
	}

	i--;
	len = i;
	(i % 2 == 0) ? (len2 = len) : (len2 = len + 1);

	while (i >= len / 2)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = c;
		i--;
	}
}
