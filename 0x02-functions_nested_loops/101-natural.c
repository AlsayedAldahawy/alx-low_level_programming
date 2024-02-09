#include <stdio.h>

/**
 * main - Entry point to program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 at success.
*/

int main(void)
{
	int sum = 0, i = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%i\n", sum);
	return (0);
}
