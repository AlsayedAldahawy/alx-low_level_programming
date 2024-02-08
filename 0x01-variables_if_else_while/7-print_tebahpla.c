#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * prints all lowercase letters in reverse
 */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
		putchar(i--);
	putchar('\n');
	return (0);
}
