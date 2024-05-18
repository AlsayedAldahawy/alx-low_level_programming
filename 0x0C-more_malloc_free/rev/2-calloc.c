#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @size: string 2.
 * @nmemb: number of letters used from S2
 *
 * Return: The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!size || !nmemb)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
