#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog structure.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog (in years).
 * @owner: Pointer to the owner's name.
 *
 * Description: This function creates a new dog structure and initializes its
 * name, age, and owner based on the provided parameters.
 *
 * Return: Pointer to the newly created dog structure, or NULL if memory
 * allocation fails or if name/owner is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
