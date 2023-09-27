#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node
 * at index index of a listint_t linked list.
 * @index: is the index of the list where the node
 * should be deleted. Index starts at 0.
 * @head: pointer to the head of the list.
 * Return: Returns: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *d;
	unsigned int i = 0;

	if (!*head || !head)
	{
		return (-1);
	}

	if (!index)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	d = *head;
	ptr = d;
	for (i = 0; i <= index && d; i++)
	{
		if (i == (index))
		{
			ptr->next = d->next;
			free(d);
			return (1);
		}
		else
		{
			ptr = d;
			d = d->next;
		}
	}
	return (-1);
}
