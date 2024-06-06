#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *ptr = h;

	for (i = 0; ptr; i++)
	{
		printf("[%d] %s\n", ptr->str ? ptr->len : 0,
		       ptr->str ? ptr->str : "(nil)");
		ptr = ptr->next;
	}

	return (i);
}
