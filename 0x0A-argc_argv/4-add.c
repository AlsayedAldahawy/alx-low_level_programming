#include <stdio.h>

/**
 * str_to_int - Converts a string to an integer.
 *
 * @s: The string to be converted to an integer.
 *
 * Return: The integer value.
 */
int str_to_int(char *s);

/**
 * is_number - Checks if a string represents a valid number.
 *
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a valid number, otherwise 0.
 */
int is_number(char s[]);

/**
 * main - Entry point of the program.
 *
 * Description:
 *   This program adds positive numbers provided as command line arguments.
 *   If no numbers are passed to the program, it prints 0 followed by a new
 *	 line.
 *   If any of the numbers contain symbols that are not digits, it prints
 *   "Error" and returns 1.
 *   The program assumes that numbers and the sum of all numbers can be stored
 *   in an int.
 *
 * @argc: Number of command line arguments.
 * @argv: Array of strings containing the argument values.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (!is_number(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += str_to_int(argv[i]);
			i++;
		}
		printf("%i\n", sum);
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

/**
 * is_number - Checks if a string represents a valid number.
 *
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a valid number, otherwise 0.
 */
int is_number(char s[])
{
	int length = 0;

	if (s[length] == '-')
	{
		length++;
	}

	while (s[length] != '\0')
	{
		if (s[length] > '9' || s[length] < '0')
		{
			return (0);
		}

		length++;
	}

	return (1);
}
