#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: A pointer to the newly created array, or NULL if size is 0 or
 * if malloc fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
