#include "main.h"
#include <stdio.h>

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
	int M = 10;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
		while (i <= size)
		{
			if (i == size)
			{
				putchar('\n');
				break;
			}
            if (i < (size / 10))
                M = (size % 10);
			if (i % 10 == 0)
			{
				printf("%08x: ", i);
				for (j = 1; j <= M; j++)
				{
					if (M != 10)
					{
						putchar(' ');
						putchar(' ');
					}
					else
						printf("%02x", b[i + j - 1]);
					if (j % 2 == 0)
						putchar(' ');
				}
			}
            if (b[i] > 31 && b[i] < 127)
			    putchar(b[i]);
		    else
			    putchar('.');
			if ((i + 1) % 10 == 0)
				putchar('\n');
			i++;
		}
}
