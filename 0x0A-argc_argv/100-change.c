#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program calculates the minimum number of coins needed to make change
 *   for a given amount of money (in cents).
 *
 * Usage: ./change cents
 *   - 'cents' represents the amount of cents you need to give back.
 *
 * If the number of arguments passed to your program is not exactly 1,
 * it prints "Error," followed by a new line, and returns 1.
 *
 * You should use atoi to parse the parameter passed to your program.
 *
 * If the number passed as the argument is negative, it prints "0," followed
 * by a new line.
 *
 * You can use an unlimited number of coins with values 25, 10, 5, 2, and 1 cent.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of strings that holds the argument values.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int coins = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x <= 0)
		printf("0\n");
	else
	{
		if (x / 25)
		{
			coins += (x / 25);
			x %= 25;
		}
		if (x / 10)
		{
			coins += (x / 10);
			x %= 10;
		}
		if (x / 5)
		{
			coins += (x / 5);
			x %= 5;
		}
		if (x / 2)
		{
			coins += (x / 2);
			x %= 2;
		}
		if (x / 1)
		{
			coins += (x / 1);
			x %= 1;
		}
		printf("%i\n", coins);
	}

	return (0);
}
