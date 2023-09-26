#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer to singly linked list head.
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
