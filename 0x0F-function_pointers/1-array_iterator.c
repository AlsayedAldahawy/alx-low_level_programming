#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Iterates over an array and applies a function to
 * each element.
 * @array: Pointer to the array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to apply to each element.
 *
 * Description:
 * This function iterates over the given array and applies the specified
 * function
 * to each element. It checks for valid input parameters (non-null array,
 * positive size,
 * and non-null action function) before performing the iteration.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!(array && size && action))
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
