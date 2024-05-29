#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Description:
 * This function searches for an integer in the given array using the specified
 * comparison function. It returns the index of the first occurrence of the
 * integer
 * that satisfies the comparison function. If no match is found, it returns -1.
 *
 * Return: Index of the first matching integer, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
