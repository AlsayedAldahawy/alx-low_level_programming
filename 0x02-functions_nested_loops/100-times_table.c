#include "main.h"

/**
 * print_times_table -   a function that prints the n times table,
 * starting with 0.
 * @n : If n is greater than 15 or less than 0 the function
 * should not print anything
*/

void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b != 0)
				(a * b) <= 99 ? ((a * b) <= 9 ? printf(",   ") :
						printf(",  ")) : (printf(", "));
			printf("%i", a * b);
		}
		printf("\n");
	}
}
