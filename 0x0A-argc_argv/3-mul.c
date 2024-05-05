#include <stdio.h>

int str_to_int(char *s);

/**
 * main - A program that multiplies two numbers.
 *
 * Description:
 *   This program multiplies two numbers provided as command line arguments.
 *   It prints the result of the multiplication, followed by a new line.
 *   If the program does not receive exactly two arguments, it prints "Error"
 *   and returns 1.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of strings that holds the argument values.
 *
 * Return: Always returns 0 to indicate successful execution.
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
 * str_to_int - Converts a string to an integer.
 *
 * @s: The string to be converted to an integer.
 *
 * Return: The integer value.
 */
int str_to_int(char *s)
{
	int length = 0, num = 0, neg = 1;

	while (s[length] != '\0')
	{
		if (s[length] == '-')
		{
			neg *= -1;
			length++;
			continue;
		}

		num = (num * 10) + (s[length] - '0');
		length++;
	}

	return (neg * num);
}
