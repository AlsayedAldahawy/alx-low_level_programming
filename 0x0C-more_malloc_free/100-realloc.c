#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 *
 *
 * @ptr: is a pointer to the memory previously allocated with a
 * call to malloc: malloc(old_size).
 *
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 *
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: the pointer to the newly created array
 * The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of
 * the old and new sizes
 *
 * If new_size > old_size, the “added” memory should not be initialized
 *
 * If new_size == old_size do not do anything and return ptr
 *
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL, then the call
 * is equivalent to free(ptr). return NULL
 * Don’t forget to free ptr when it makes sense
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, size;
	char *ptrNew, *ptrOld = ptr;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
		size = old_size;
	else if (old_size > new_size)
		size = new_size;
	else
		return (ptr);

	ptrNew = malloc(new_size);
	if (!ptrNew)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptrNew + i) = *(ptrOld + i);
	}

	free(ptr);
	return (ptrNew);
}
