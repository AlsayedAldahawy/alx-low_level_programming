#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * The function must print the content of size bytes of the buffer pointed by b
 * The output should print 10 bytes per line
 * Each line starts with the position of the first byte of-
 * -the line in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer,
 * 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer.
 * If the byte is a printable character,
 * print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 *
 * @b: pointer to the buffer.
 * @size: size of the buffer.
 *
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 10, size_var = size;

	while (i <= size)
	{
		if (i % 10 == 0)
		{
			printf("%08x: ", i);

			for (j = 1; j <= 10; j++)
			{
				if (size_var <= 0)
				{
					printf("  ");
				}
				else
				{
					printf("%02x", b[i + j - 1]);
				}

				if ((j % 2 == 0) && j != 0)
					printf(" ");
				size_var--;
			}
		}

		if (b[i] <= 10)
			printf(".");
		else
			printf("%c", b[i]);

		if ((i + 1) % 10 == 0 || i == size)
		{
			printf("\n");
		}

		i++;
	}
}
