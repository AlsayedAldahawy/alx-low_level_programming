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
	int len_1 = 0, len_2 = 0, len_r = size_r;
	int m1 = 1, m2 = 1, digit1, digit2, carry = 0, sum = 0;

	while (n1[len_1] != '\0')
		len_1++;
	while (n2[len_2] != '\0')
		len_2++;
	if (len_1 + 1 >= len_r || len_2 + 1 >= len_r)
		return (0);
	r[len_r] = '\0';
	len_r--;
	len_1--;
	len_2--;
	while (len_r >= 0)
	{
		digit1 = ((n1[len_1] - '0') * m1);
		digit2 = ((n2[len_2] - '0') * m2);
		sum = digit1 + digit2 + carry + '0';
		if (sum > '9')
		{
			sum = sum - 10;
			carry = 1;
		}
		else
			carry = 0;
		r[len_r] = sum;
		len_r--;
		if (len_1 <= 0)
			m1 = 0;
		else
			len_1--;
		if (len_2 <= 0)
			m2 = 0;
		else
			len_2--;
	}
	return (remove_left_zeros(size_r, r));
}
