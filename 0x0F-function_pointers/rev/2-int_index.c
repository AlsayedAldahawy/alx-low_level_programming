#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 *
 * @array: array.
 * @size:  is the size of the array
 *
 * @cmp: pointer to a function cmp.
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
