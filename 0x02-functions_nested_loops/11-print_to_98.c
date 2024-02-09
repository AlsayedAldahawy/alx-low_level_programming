#include "main.h"

/**
 * print_to_98 -  a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n : number to start from
*/

void print_to_98(int n)
{
	while (n < 98 || n > 98)
	{
		printf("%i", n);
		printf(", ");
		n > 98 ? n-- : n++;
	}
	printf("%i", n);
	printf("\n");
}
