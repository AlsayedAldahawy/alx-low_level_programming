#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: minimum number.
 * @max: maximum number.
 *
 * The array created should contain all the values from min
 * (included) to max (included),ordered from min to max
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);

	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
