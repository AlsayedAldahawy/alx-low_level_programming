#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the linked list
 * Return:  the number of nodes.
 * If str is NULL, print [0] (nil).
 */

size_t list_len(const list_t *h)
{
	size_t i = 1;

	if (!h)
	{
		return (0);
	}

	while (h->next)
	{
		i++;
		h = h->next;
	}
	return (i);
}
