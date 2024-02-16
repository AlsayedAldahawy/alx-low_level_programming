#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line.
 * for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c = 1;

	while (c <= 100)
	{
		if (c % 3 == 0)
		{
			printf("Fizz");
		}
		if (c % 5 == 0)
		{
			printf("Buzz");
		}
		if (!(c % 3 == 0 || c % 5 == 0))
		{
			printf("%d", c);
		}
		(c != 100) ? (printf(" ")) : (printf("\n"));
		c++;
	}
	return (0);
}
