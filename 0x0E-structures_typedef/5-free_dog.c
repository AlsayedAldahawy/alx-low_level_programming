#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  function that frees dogs.
 * @d: pointer to a dog.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
