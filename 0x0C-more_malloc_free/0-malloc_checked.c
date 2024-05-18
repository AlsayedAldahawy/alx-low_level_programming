#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 *
 * Return:
 *   - On success, returns a pointer to the allocated memory.
 *   - If malloc fails, exits with status code 98.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
