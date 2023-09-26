#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer to singly linked list head.
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
