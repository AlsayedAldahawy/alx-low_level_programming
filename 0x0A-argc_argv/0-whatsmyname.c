#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program prints the name of the executable (the program itself),
 *   followed by a newline character. It takes command line arguments as input.
 *
 * @argc: The number of command line arguments (including the program name).
 * @argv: An array of strings containing the command line arguments.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
