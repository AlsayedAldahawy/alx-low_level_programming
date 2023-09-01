#include <stdio.h>

int str_to_int(char *s);
int is_number(char s[]);

/**
 * main - a program that adds positive numbers.
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * You can assume that numbers and the addition of all the numbers
 * can be stored in an int
 *
 * @argc: number of command line arguments.
 * @argv: array of strings that holds the arguments values.
 *
 * Return: always 0.
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
			if ((!(is_number(argv[i]))))
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + str_to_int(argv[i]);
			i++;
		}
		printf("%i\n", sum);
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

/**
 * is_number - a function that checks if a string is a number.
 *
 * @s: string to be checked.
 *
 * Return: 1 if number, otherwise 0.
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
		if (s[length] > 57 || s[length] < 48)
		{
			return (0);
		}

		length++;
	}

	return (1);
}
