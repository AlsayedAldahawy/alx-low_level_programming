#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees each node in the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
