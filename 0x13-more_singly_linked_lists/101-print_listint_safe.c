#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: the number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = NULL;
	const listint_t *ptr2 = NULL;
	size_t i = 0, j;

	ptr = head;
	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		i++;
		ptr = ptr->next;
		ptr2 = head;
		j = 0;
		while (j < i)
		{
			if (ptr == ptr2)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (i);
			}
			ptr2 = ptr2->next;
			j++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
