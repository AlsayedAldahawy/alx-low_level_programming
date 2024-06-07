#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a list of integers safely.
 * @head: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr, *ptr2;
	unsigned int i = 0, j;

	if (!head)
		exit(98);

	ptr = head;

	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		ptr2 = head;
		i++;
		j = 0;
		while (j++ < i)
		{
			if (ptr2 == ptr)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (i);
			}
			ptr2 = ptr2->next;
		}
	}

	return (i);
}
