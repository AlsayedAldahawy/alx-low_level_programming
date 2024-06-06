#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to the linked list
 * @str: string to be added.
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->next = *head;
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	*head = ptr;
	return (ptr);
}
