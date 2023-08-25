#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: pointer to the buffer.
 * @size: size of the buffer.
 *
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 10, size_var = size;

	while (i <= size)
	{
		if (i == size)
		{
			printf("\n");
			break;
		}
		if (i % 10 == 0)
		{
			printf("%08x: ", i);

			for (j = 1; j <= 10; j++)
			{
				if (size_var <= 0)
					printf("  ");
				else
				{
					printf("%02x", b[i + j - 1]);
				}

				if (j % 2 == 0)
					printf(" ");
				size_var--;
			}
		}

		if (b[i] <= 10)
			printf(".");
		else
			printf("%c", b[i]);

		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}

		i++;
	}
}
