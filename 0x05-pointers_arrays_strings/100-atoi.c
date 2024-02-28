#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 *
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 * @s: string to be converted
 *
 * Return: the converted nummber in int or 0 if there's no numbers in string
*/

int _atoi(char *s)
{
	int i = 0, sign = 1, firstDigitFlag = 0;
	unsigned int number = 0;

	while (s[i])
	{
		if (s[i] == '-' && firstDigitFlag == 0)
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			firstDigitFlag++;
			number = (number * 10) + (s[i] - '0');
		}
		if (firstDigitFlag >= 1 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}
		i++;
	}
	return (sign * number);
}
