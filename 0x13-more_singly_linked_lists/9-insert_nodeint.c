#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts
 * a new node at a given position.
 * @idx: is the index of the list where the new node
 * should be added. Index starts at 0.
 * @head: pointer to the head of the list.
 * @n: value of the node variable n.
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}
