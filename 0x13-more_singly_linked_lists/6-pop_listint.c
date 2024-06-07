#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Value stored in the removed node, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int n;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;

	free(*head);
	*head = temp;

	return (n);
}
