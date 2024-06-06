#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees memory allocated for a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: Frees each node and its associated string.
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
