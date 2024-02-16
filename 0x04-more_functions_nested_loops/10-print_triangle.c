#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: the size of the triangle
*/

void print_triangle(int size)
{
	int i, j, s = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (s)
	{
		for (i = 1; i < s ; i++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= size - i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s--;
	}
}
