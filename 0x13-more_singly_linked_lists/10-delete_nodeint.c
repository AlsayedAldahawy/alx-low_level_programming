#include <stdio.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *temp;
	unsigned int i;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr; i++)
	{
		if (i == index - 1)
		{
			temp = ptr->next->next;
			free(ptr->next);
			ptr->next = temp;
			return (1);
		}

		ptr = ptr->next;
	}

	return (-1);
}
