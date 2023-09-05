#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * previously created by your alloc_grid function.
 *
 * @ac: arguments count.
 * @av: arguments vector.
 *
 * Return: NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}

	ptr = malloc(size + ac + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			j++, k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
	}
