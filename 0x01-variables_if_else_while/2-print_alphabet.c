#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * prints all lowercase letters
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i++);
	putchar('\n');
	return (0);
}
