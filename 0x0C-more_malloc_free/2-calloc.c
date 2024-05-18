#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 *
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return:
 *   - On success, returns a pointer to the allocated memory.
 *   - If nmemb or size is 0, returns NULL.
 *   - If malloc fails, returns NULL.
 *
 * Description:
 *   - The _calloc function allocates memory for an array of nmemb elements,
 *     each of size bytes.
 *   - The allocated memory is set to zero.
 *   - FYI: The standard library provides a different function called calloc.
 *     You can run 'man calloc' to learn more about it.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
