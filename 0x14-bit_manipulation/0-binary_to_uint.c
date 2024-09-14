#include <stdio.h>
/**
 * binary_to_uint -  a function that converts a binary number
 * to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 *  or when b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0;
	unsigned short digit = 0;

	if (!b)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		digit = b[len] - '0';
		sum = sum * 2 + digit;
		len++;
	}
	return (sum);
}
