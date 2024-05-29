#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description:
 * This program prints the opcodes (machine code instructions) of its own
 * executable. It takes a single argument (number of bytes) to determine
 * how many opcodes to display.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int x, bytes;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1); /* Exit with error code 1 (invalid number of arguments) */
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2); /* Exit with error code 2 (negative byte count) */
	}

	a = (char *)main; /* Get the address of the main function */

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", a[x]); /* Print opcode in hexadecimal format */
			break;
		}
		printf("%02hhx ", a[x]);
	}

	return (0);
}
