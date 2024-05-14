#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of pointers to strings (arguments).
 *
 * Return: A pointer to the concatenated string, or NULL if malloc fails.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, total_size = 0;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_size++;
	}

	ptr = malloc(sizeof(char) * (total_size + ac + 1));

	if (!ptr)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ptr[k++] = av[i][j];

		ptr[k++] = '\n';
	}
	ptr[k] = '\0';

	return (ptr);
}
