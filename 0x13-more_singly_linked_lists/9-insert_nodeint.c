#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specific index.
 * @head: Pointer to the head of the list.
 * @idx: Index at which to insert the new node (starting from 0).
 * @n: Value to store in the new node.
 *
 * Return: Pointer to the new node, or NULL if insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	if (!idx)
	{
		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}

	for (i = 0; i < idx && ptr; i++)
	{
		if (i == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}

		ptr = ptr->next;
	}

	free(new);
	return (NULL);
}
