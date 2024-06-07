#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all node values in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of node values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
