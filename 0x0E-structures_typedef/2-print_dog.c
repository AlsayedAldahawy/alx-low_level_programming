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
		d->name == NULL ? printf("(nil)"): printf("Name: %s\n", d->name);
		d->age == 0 ? printf("(nil)"): printf("Agd: %.6f\n", d->age);
		d->owner == NULL ? printf("(nil)"): printf("Owner: %s\n", d->owner);
	}
}
