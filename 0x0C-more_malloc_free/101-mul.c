#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isInteger(char *str);
int leadingZeros(char *str);
int isZero(char *str);
char *intMul(char *ptr, char *str1, char *str2, int l1, int l2);


/**
 * main - Multiplies two positive numbers given as command-line arguments.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 *
 * Exit codes:
 *   - 98: If the number of arguments is incorrect or if either operand is not
 *         a valid positive integer.
 */

int main(int argc, char *argv[])
{
	char *ptr;
	int len_1, len_2, i, sign1 = 0, sign2 = 0;
	unsigned int LZ1, LZ2, skip1, skip2;

	len_1 = isInteger(argv[1]);
	len_2 = isInteger(argv[2]);
	(len_1 < 0) ? (len_1 *= -1, sign1 = 1) : (0);
	(len_2 < 0) ? (len_2 *= -1, sign2 = 1) : (0);
	if (argc != 3 || !len_1 || !len_2)
	{
		printf("Error\n");
		exit(98);
	}
	if (isZero(argv[1] + sign1) || isZero(argv[2] + sign2))
	{
		printf("0\n");
		return (0);
	}
	LZ1 = leadingZeros(argv[1] + sign1);
	LZ2 = leadingZeros(argv[2] + sign2);
	len_1 -= LZ1;
	len_2 -= LZ2;
	ptr = malloc(sizeof(char) * (len_1 + len_2));
	if (!ptr)
		return (1);
	for (i = 0; i < len_1 + len_2; i++)
		ptr[i] = '0';
	skip1 = sign1 + LZ1;
	skip2 = sign2 + LZ2;
	ptr = intMul(ptr, (argv[1] + skip1), (argv[2] + skip2), len_1, len_2);
	(sign1 != sign2) ? (_putchar('-')) : (0);
	skip1 = 0;
	for (i = 0; i < len_1 + len_2; i++)
		((!skip1 && ptr[i] == '0')) ? (0) : (_putchar(ptr[i]), skip1++);
	_putchar('\n');
	free(ptr);
	return (0);
}


/**
 * isInteger - Checks if a string represents an integer
 *			(positive, negative, or zero).
 *
 * @str: The string to be checked.
 *
 * Return: The length of the integer represented by the string, or 0 if the
 *         string is not a valid integer. The return value can be negative to
 *         indicate anegative number.
 */
int isInteger(char *str)
{
	unsigned int i = 0;
	int sign = 1, x = 0;

	if (!str || !str[i])
		return (0);

	if (str[i] == '-')
	{
		sign = -1;
		x = 1;
		i++;
	}

	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);

		i++;
	}
	return (((i * sign) + x));
}

/**
 * intMul - Multiplies two integer strings and returns the result as
 *			a new string.
 *
 * @ptr: A pointer to a pre-allocated memory location where the result
 *			will be stored.
 * @str1: The first integer string.
 * @str2: The second integer string.
 * @l1: The length of the first integer string.
 * @l2: The length of the second integer string.
 *
 * Return: A pointer to the memory location containing the result string.
 */
char *intMul(char *ptr, char *str1, char *str2, int l1, int l2)
{
	int j, k, carry, result, oldValue;
	char d1, d2;

	while (--l1 >= 0)
	{
		j = l2 - 1;
		k = l1 + l2;
		carry = 0;
		while (j >= 0)
		{
			d1 = str1[l1] - '0';
			d2 = str2[j--] - '0';
			oldValue = ptr[k] - '0';
			result = (d1 * d2) + oldValue + carry;
			ptr[k--] = (result % 10) + '0';
			carry = (result / 10);
			if (j < 0)
				ptr[k] = carry + '0';
		}
	}
	return (ptr);
}

/**
 * leadingZeros - Counts the number of leading zeros in a string.
 *
 * @str: The string to be checked.
 *
 * Return: The number of leading zeros in the string.
 */
int leadingZeros(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == '0')
			i++;
		else
			return (i);
	}
	return (i);
}

/**
 * isZero - Checks if a string represents the number zero.
 *
 * This function determines if the provided string consists only of '0
 * characters.
 *
 * @str: The string to be checked.
 *
 * Return: 1 if the string is zero, 0 otherwise.
 */
int isZero(char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		if (str[i++] != '0')
			return (0);
	}
	return (1);
}
