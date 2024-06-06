#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
