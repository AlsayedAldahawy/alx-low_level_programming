#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to delete (starting from 0).
 *
 * Return: 1 if successful, -1 if deletion fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *temp;
	unsigned int i;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr; i++)
	{
		if (i == index - 1)
		{
			temp = ptr->next->next;
			free(ptr->next);
			ptr->next = temp;
			return (1);
		}

		ptr = ptr->next;
	}

	return (-1);
}
