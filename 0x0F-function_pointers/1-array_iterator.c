#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!(array && size && action))
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
