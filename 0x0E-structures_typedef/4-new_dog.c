#include <string.h>
#include <stdlib.h>
#include "dog.h"

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

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	if (!(name && owner))
	{
		free(dog);
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (strlen(name)));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner)));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
