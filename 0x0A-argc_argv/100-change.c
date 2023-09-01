#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * Usage: ./change cents
 *
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 *
 * you should use atoi to parse the parameter passed to your program
 *
 * If the number passed as the argument is negative,
 * print 0, followed by a new line
 *
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * @argc: number of command line arguments.
 * @argv: array of strings that holds the arguments values.
 *
 * Return: always 0.
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
	{
		printf("0\n");
	}
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
		if (x / 1)
		{
			coins += (x / 1);
			x %= (1);
		}
		printf("%i\n", coins);
	}
	return (0);
}
