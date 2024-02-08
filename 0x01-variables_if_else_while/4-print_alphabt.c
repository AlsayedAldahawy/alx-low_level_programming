#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i++);
		if (i == 'q' || i == 'e')
			i++;
	}
	putchar('\n');
	return (0);
}
