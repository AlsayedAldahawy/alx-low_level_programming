#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to singly linked list head.
 * Return: returns the head node’s data (n)
 * if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (!head || !*head)
		return (0);

	x = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (x);
}
