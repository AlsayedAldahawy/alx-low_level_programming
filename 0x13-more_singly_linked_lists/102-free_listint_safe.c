#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int d;
	size_t len = 0;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
