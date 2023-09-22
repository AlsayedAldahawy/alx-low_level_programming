#include "lists.h"

void first(void) __attribute__ ((constructor));


/**
 * free_list - a function that prints
 * "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 * before the main function is executed.
 * @head: pointer to the linked list
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
