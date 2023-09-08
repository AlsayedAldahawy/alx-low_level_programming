#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long int ston(char *s);
int isnum(char s[]);

/**
 * main -a program that multiplies two positive numbers.
 *
 * @argv: arguments vector.
 * @argc: arguments counter.
 *
 * Return: 0 when success.
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 *
 * *****If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98******
 *
 * ******num1 and num2 should only be composed of digits. If not,
 * print Error, followed by a new line, and exit with a status of 98*****
 *
 * ****You are allowed to use more than 5 functions in your file****
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || (!(isnum(argv[1]) && isnum(argv[2]))))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%lu\n", ston(argv[1]) * ston(argv[2]));
	return (0);
}

/**
 * ston - a function that converts a string to unsigned long int.
 *
 * @s: string to be converted to unsigned long int.
 *
 * Return: integer unsigned long int.
*/

unsigned long int ston(char *s)
{
	int length = 0, neg = 1;
	unsigned long int num = 0;

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
 * isnum - a function that checks if a string is a number.
 *
 * @s: string to be checked.
 *
 * Return: 1 if number, otherwise 0.
*/

int isnum(char s[])
{
	int length = 0;

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
