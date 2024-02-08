#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i++);
	i = 'A';
	while (i <= 'Z')
		putchar(i++);
	putchar('\n');
	return (0);
}
