#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * where index is the index of the node, starting at 0
 * @head: pointer to the head of the list.
 * @index: index of the node to be returned.
 * Return: the nth node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
