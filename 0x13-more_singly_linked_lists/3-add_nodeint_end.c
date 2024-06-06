#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the head of the list.
 * @n: Value to store in the new node.
 *
 * Return: Address of the new node, or NULL if allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new;

	return (new);
}
