#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a linked list in-place.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL, *ptr = *head;

	if (!*head || !head)
		return (NULL);

	while ((*head)->next)
	{
		*head = ptr->next;
		ptr->next = prv;
		prv = ptr;
		ptr = *head;
	}

	(*head)->next = prv;

	return (*head);
}
