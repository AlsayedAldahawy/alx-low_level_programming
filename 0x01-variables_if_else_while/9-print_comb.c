#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints all possible combinations of single-digit numbers.
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i++);
		if (i != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
