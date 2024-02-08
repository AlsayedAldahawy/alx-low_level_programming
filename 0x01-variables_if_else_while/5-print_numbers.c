#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * program that prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
		putchar(i++);
	putchar('\n');
	return (0);
}
