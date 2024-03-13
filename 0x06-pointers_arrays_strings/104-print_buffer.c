#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
			{
				printf("  ");
			}
			else
				printf("%02x", b[i + j]);
			if (!((j + 1) % 2))
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
			{
				break;
			}
			if (b[i + j]  <= 31 || b[i + j] >= 127)
			{
				printf(".");
			}
			else
				printf("%c", b[i + j]);
		}
		printf("\n");
		i += 10;
	}
}
