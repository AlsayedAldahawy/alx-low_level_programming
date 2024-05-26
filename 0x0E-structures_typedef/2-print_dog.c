#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to the dog structure to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If 'd' is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
