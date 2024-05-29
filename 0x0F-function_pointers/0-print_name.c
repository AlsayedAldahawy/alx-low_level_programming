#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Calls a function to print a name.
 * @name: The name to be printed.
 * @f: A pointer to the function that prints the name.
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It calls the specified function to print the given name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(f && name))
	{
		return (NULL);
	}
	f(name);
}
