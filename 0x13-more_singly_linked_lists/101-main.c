#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n;

	n = print_listint_safe(NULL);
	printf("%lu\n", n);
	return (0);
}
