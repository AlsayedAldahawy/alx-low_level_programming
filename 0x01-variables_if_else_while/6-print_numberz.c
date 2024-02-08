#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * program that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
		putchar(i++);
	putchar('\n');
	return (0);
}
