#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: number of command line arguments.
 * @argv: array of strings that holds the arguments values.
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
