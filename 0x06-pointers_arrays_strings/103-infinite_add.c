#include "main.h"
#include <stdio.h>

/**
 * remove_left_zeros - removes left zeros of a string.
 * @size: the string size.
 * @r: string.
 * Return: poniter to string r.
 */

char *remove_left_zeros(int size, char *r)
{
	int i = 0, start_digit;

		while (i < size)
	{
		if (r[i] != '0')
		{
			start_digit = i;
			break;
		}
		i++;
	}
	for (i = 0; i <= size; i++)
	{
		r[i] = r[i + start_digit];
	}
	return (r);
}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number.
 * @n2: second number.
 * @size_r: the buffer size.
 * @r: result string.
 * Return: poniter to string if size_r is suitable for the result length.
 * or return 0 if size_r less than the result length.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, lenr = size_r, digit1, digit2, sum = 0, carry = 0;

	for (len1 = 0; n1[len1]; len1++)
	;
	for (len2 = 0; n2[len2]; len2++)
	;

	if (len1 + 1 >= lenr || len2 + 1 >= lenr)
		return (0);

	r[lenr--] = '\0';

	len1--;
	len2--;

	while (lenr >= 0)
	{
		if (len1 < 0)
			digit1 = 0;
		else
			digit1 = n1[len1--] - '0';

		if (len2 < 0)
			digit2 = 0;
		else
			digit2 = n2[len2--] - '0';

		sum = digit1 + digit2 + carry;

		if (sum > 9)
		{
			sum = sum - 10;
			carry = 1;
		}
		else
			carry = 0;

		r[lenr--] = sum + '0';
	}
	return (remove_left_zeros(size_r, r));
}
