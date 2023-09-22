#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the linked list
 * Return:  the number of nodes.
 * If str is NULL, print [0] (nil).
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%lu] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i++;
	}
	return (i);
}
