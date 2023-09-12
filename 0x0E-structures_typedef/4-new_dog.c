#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @age: age of dog.
 * @name: name of dog.
 * @owner: owner of the dog.
 * Return: Return NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(p);
		return (NULL);
	}

	p->name = malloc(sizeof(name));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;

	return (p);
}
