#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specific index.
 * @head: Pointer to the head of the list.
 * @index: Index of the desired node (starting from 0).
 *
 * Return: Pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	while (index--)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
