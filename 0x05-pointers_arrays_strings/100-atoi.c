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
	unsigned int len = 0, digit, int_len = 0, sum = 0;
	int brk = 0, neg_sign = 0;

	/**
	 * calculate the length of the string.
	 * calculate the sum : the integer value.
	 * calculate the length of the integer.
	 * calculate the negative sign.
	*/

	while (*(s + len) != '\0')
	{
		if (*(s + len) >= '0' && *(s + len) <= '9' && brk == 0)
		{
			digit = *(s + len) - '0';
			sum = (sum * 10) + digit;
			int_len++;
		}
		else if (*(s + len) == '-' && brk == 0)
		{
			neg_sign++;
		}
		if ((*(s + len) < '0' || *(s + len) > '9') && int_len > 0)
		{
			brk++;
		}
		len++;
	}
	/**
	 *
	 * testing the values of len, int_len, neg_sign.
	 * printf("length:%i\nint_len:%i\nsign:%i\n", len, int_len, neg_sign);
	 *
	 */

	(neg_sign % 2 == 0) ? (sum = sum) : (sum *= -1);
	return (sum);
}
