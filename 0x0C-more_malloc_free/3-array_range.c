#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return:
 *   - On success, returns a pointer to the newly created array.
 *   - If min > max, returns NULL.
 *   - If malloc fails, returns NULL.
 *
 * Description:
 *   - The array created contains all values from min to max (inclusive).
 *   - The array is ordered from min to max.
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	for (i = 0; min + i <= max; i++)
		ptr[i] = min + i;

	return (ptr);
}
