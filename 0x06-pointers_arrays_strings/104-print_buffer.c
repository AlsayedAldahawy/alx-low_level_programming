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
	int i = 0, j = 10;
	int size_var = size;

	if (size <= 0)
		putchar('\n');
	else
	{
		while (i <= size)
		{
			if (i == size)
			{
				putchar('\n');
				break;
			}
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				for (j = 1; j <= 10; j++)
				{
					if (size_var <= 0)
					{
						putchar(' ');
						putchar(' ');
					}
					else
						printf("%02x", b[i + j - 1]);
					if (j % 2 == 0)
						putchar(' ');
					size_var--;
				}
			}
			if (b[i] <= 31 || b[i] >= 127)
				putchar('.');
			else
				putchar(b[i]);
			if ((i + 1) % 10 == 0)
				putchar('\n');
			i++;
		}
	}
}
