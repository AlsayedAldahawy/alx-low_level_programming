#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the newly created node, or NULL if allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
