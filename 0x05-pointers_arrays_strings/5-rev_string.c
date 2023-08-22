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

	int i = 0, len;
	char c;

	while (*(s + i) != '\0')
	{

		i++;
	}

	i--;
	len = i;

	printf("c: %i\n", len);

	while (i >= len / 2)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i);
		*(s + len - i) = c;
		i--;

	}
	_putchar('\n');
}
