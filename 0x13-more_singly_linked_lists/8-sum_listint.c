#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer to the head of the list.
 * Return: sum of all the data
 * if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
	{
		return (0);
	}

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
