#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long int ston(char *s);
int isnum(char s[]);
int _strlen(char *s);

/**
 * main -a program that multiplies two positive numbers.
 *
 * @argv: arguments vector.
 * @argc: arguments counter.
 *
 * Return: 0 when success.
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the res, followed by a new line
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
	int *res, len_1, len_2, len_r, i, d1 = 0, d2 = 0, carry, frstD = 0;
	char *str1 = argv[1], *str2 = argv[2];

	if (argc != 3 || (!(isnum(str1) && isnum(str2))))
	{
		printf("Error\n");
		exit(98);
	}

	len_1 = _strlen(str1);
	len_2 = _strlen(str2);

	len_r = len_1 + len_2;
	res = malloc(sizeof(int) * len_r);
	if (!res)
		return (1);
	for (i = 0; i < len_1 + len_2; i++)
		res[i] = 0;
	for (len_1 = len_1; len_1 > 0; len_1--)
	{
		d1 = str1[len_1 - 1] - 48;
		carry = 0;
		for (len_2 = _strlen(str2); len_2 > 0; len_2--)
		{
			d2 = str2[len_2 - 1] - 48;
			carry += res[len_1 + len_2 - 1] + (d1 * d2);
			res[len_1 + len_2 - 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len_1 + len_2] += carry;
	}
	for (i = 0; i < len_r; i++)
	{
		if (res[i])
			frstD = 1;
		if (frstD)
			_putchar(res[i] + 48);
	}
	if (!frstD)
		_putchar(48);
	_putchar('\n');
	free(res);
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

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: string passed by reference.
 *
 * Return: returns the length of the string.
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
