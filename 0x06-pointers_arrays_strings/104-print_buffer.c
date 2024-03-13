#include "main.h"
#include <stdio.h>

/**
 * printLine - prints a buffer
 * @b: pointer to buffer to be printed
 * @size: size of buffer
 * @line: line of buffer to print
 */

void printLine(int line, int size, char *b);

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		printf("%08x: ", i);
		printLine(i, size, b);
		printf("\n");
		i += 10;
	}
}

/**
 * printLine - prints a buffer
 * @b: pointer to buffer to be printed
 * @size: size of buffer
 * @line: line of buffer to print
 */

void printLine(int line, int size, char *b)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (line + j >= size)
		{
			printf("  ");
		}
		else
			printf("%02x", b[line + j]);
		if (!((j + 1) % 2))
			printf(" ");
	}

	for (j = 0; j < 10; j++)
	{
		if (line + j >= size)
		{
			break;
		}
		if (b[line + j]  <= 31 || b[line + j] >= 127)
		{
			printf(".");
		}
		else
			printf("%c", b[line + j]);
		}
}
