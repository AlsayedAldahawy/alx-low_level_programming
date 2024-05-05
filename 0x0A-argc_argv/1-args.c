#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program prints the number of command line arguments passed to it,
 *   excluding the program name itself (which is always included in argc).
 *
 * @argc: The number of command line arguments (including the program name).
 * @argv: An array of strings containing the command line arguments.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
