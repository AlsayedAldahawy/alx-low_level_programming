#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the linked list
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
