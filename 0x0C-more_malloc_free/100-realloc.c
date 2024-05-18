#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: A pointer to the memory previously allocated with malloc
 * (malloc(old_size)).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return:
 *   - On success, returns a pointer to the newly allocated memory.
 *   - If new_size > old_size, the "added" memory is uninitialized.
 *   - If new_size == old_size, returns ptr without any changes.
 *   - If ptr is NULL, equivalent to malloc(new_size).
 *   - If new_size is zero and ptr is not NULL, equivalent to free(ptr).
 *
 * FYI: The standard library provides a different function called realloc.
 * Run 'man realloc' to learn more.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i, size;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	if (!ptr2)
		return (NULL);

	(new_size > old_size) ? (size = new_size) : (size = old_size);

	for (i = 0; i < size; i++)
		ptr2[i] = ((char *)ptr)[i];

	free(ptr);
	return (ptr2);
}
