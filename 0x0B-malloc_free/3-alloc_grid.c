#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: array width.
 * @height: array height.
 *
 * Return: Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			free(ptr);
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
