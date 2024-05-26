#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the dog's name.
 * @age: Age of the dog (in years).
 * @owner: Pointer to the owner's name.
 *
 * Description: This structure defines the basic information about a dog,
 * including its name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
