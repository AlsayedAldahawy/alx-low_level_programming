#include "lists.h"

/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list.
 * @head: pointer to the linked list
 * @str: string to be added.
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->next = NULL;
	new->len = strlen(str);
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new;

	return (new);
}


