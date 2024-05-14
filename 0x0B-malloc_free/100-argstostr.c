#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * function that concatenates all the arguments of your program.
 *
 */
char *argstostr(int ac, char **av)
{
	char *ptr, i = 0, j = 0, k = 0, total_size = 0;

	if (!ac || !av)
		return (NULL);

	while (i < ac)
	{
		for (total_size = total_size; *(av[i] + total_size); total_size++)
			;

		i++;
	}

	ptr = malloc(sizeof(char) * total_size + ac + 1);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j); j++, k++)
			ptr[k] = *(av[i] + j);
		
		ptr[k] = '\n';
		
	}
	ptr[k] = '\0';

	return (ptr);
	
}
