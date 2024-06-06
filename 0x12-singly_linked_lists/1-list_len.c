#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	unsigned int i;
	const list_t *ptr = h;

	for (i = 0; ptr; i++)
	{
		ptr = ptr->next;
	}

	return (i);
}
