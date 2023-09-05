#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: intialization character.
 * @size: the size of the array.
 *
 * Return: a pointer to the array.
 * Returns NULL if size = 0 or if it fails.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		if (i == size)
		{
			ptr[i] = '\0';
			return (ptr);
		}

		ptr[i] = c;
	}

	return (NULL);
}
