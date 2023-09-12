#include <stdio.h>
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
	dog_t *p = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		free(p);
		return (NULL);
	}
	if (!p)
		return (NULL);

	p->name = malloc(sizeof(name));
	p->owner = malloc(sizeof(owner));

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
