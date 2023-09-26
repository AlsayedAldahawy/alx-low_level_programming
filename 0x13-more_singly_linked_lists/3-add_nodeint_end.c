#include "lists.h"

/**
 * add_nodeint_end -  a function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: pointer to pointer to singly linked list head.
 * @n: value of n variable of struct listint_s.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;
	return (new_node);
}
