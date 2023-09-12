#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog.
 * @d: pointer to struct.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == NULL ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
	}
	else
		return;
}
