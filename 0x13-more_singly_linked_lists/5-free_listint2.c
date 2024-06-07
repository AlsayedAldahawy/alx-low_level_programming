#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees each node in the linked list and updates head.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
