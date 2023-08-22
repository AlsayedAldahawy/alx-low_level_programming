#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: returns an integer
 */

int _atoi(char *s)
{
	int i = 0, len = 0, sum = 0, mul = 1, sign, digit;

	while (*(s + len) != '\0')
	{

		len++;
	}

	while (i <= len)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			digit = (*(s + i) - 48) * mul;
			sum = sum + digit;
			mul = mul * 10;
		}
		else if (*(s + i) == '-')
		{
			sign++;
		}
		i++;
	}
	(sign % 2 == 0) ? (sum = sum) : (sum -= sum);
	return (sum);
}
