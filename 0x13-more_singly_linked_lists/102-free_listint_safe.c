#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a list of integers safely.
 * @h: Double pointer to the head of the list.
 * Return: Number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	unsigned int i = 0;

	while (*h)
	{
		ptr = (*h)->next;

		free(*h);
		i++;

		if (ptr >= *h)
		{
			*h = NULL;
			return (i);
		}

		*h = ptr;
	}

	return (i);
}
