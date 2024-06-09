#include <stdio.h>
#include "lists.h"

/**
 * find_mid_node - Finds the middle node of a linked list in a fast way.
 * @head: Pointer to the head of the list.
 * Return: Pointer to the middle node, or NULL if the list is empty.
 *
 * Note: This function is an additional task beyond the project requirements.
 */
listint_t *find_mid_node(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	if (!head)
		return (NULL);

	while (ptr2 && ptr2->next)
	{
		ptr2 = ptr2->next->next;
		ptr1 = ptr1->next;
	}

	return (ptr1);
}
