#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: returns the integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int m = 1, digit_conf = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			m *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			digit_conf = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}

		if (digit_conf == 1)
		{
			break;
		}

		i++;
	}

	num = num * m;
	return (num);
}
