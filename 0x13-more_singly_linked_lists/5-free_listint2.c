#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to singly linked list head.
 * The function sets the head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
