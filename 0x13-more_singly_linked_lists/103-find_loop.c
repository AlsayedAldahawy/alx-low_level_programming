#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list.
 * @head: Pointer to the head of the list.
 * Return: Pointer to the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	unsigned int i = 0;

	while (head)
	{
		ptr = (head)->next;
		i++;
		if (ptr >= head)
		{
			return (head);
		}
		head = ptr;
	}
	return (NULL);
}
