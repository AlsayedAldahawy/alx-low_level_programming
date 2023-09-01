#include <stdio.h>
/**
 * str_to_int - a function that converts a string to int.
 *
 * @s: string to be converted to int.
 *
 * Return: integer value.
*/

int str_to_int(char *s);

/**
 * main - a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of
 * multiplication can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error,
 * followed by a new line, and return 1.
 *
 * @argc: number of command line arguments.
 * @argv: array of strings that holds the arguments values.
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		printf("%i\n", str_to_int(argv[1]) * str_to_int(argv[2]));

	}
	return (0);
}

/**
 * str_to_int - a function that converts a string to int.
 *
 * @s: string to be converted to int.
 *
 * Return: integer value.
*/

int str_to_int(char *s)
{
	int length = 0, num = 0, neg = 1;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			neg = -1;
			length++;
		}

		num = (num * 10) + (s[length] - '0');
		length++;
	}

	return (neg * num);
}
