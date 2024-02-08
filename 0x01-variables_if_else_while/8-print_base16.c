#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
    {
		putchar(i++);
    }
    i = 'a';

    while (i <= 'f')
    {
        putchar(i++);
    }
	putchar('\n');
	return (0);
}
