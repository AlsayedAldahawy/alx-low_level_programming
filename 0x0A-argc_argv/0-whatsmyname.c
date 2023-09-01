#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: number of command line arguments.
 * @argv: array of strings that holds the arguments values.
 *
 * return: always 0.
*/

int main(int argc, char *argv[])
{
    (void) argc;
	printf("%s\n", argv[0]);
    return (0);
}
