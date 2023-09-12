#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: dog's name.
 * @owner: Dog's owner.
 * @age: Dog's age.
 * Description: struct that has dog name, owner, age.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
