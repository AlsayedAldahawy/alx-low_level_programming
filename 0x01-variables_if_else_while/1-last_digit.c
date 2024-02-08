#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of the code
 * Return: 0 at success.
 * The output of the program should be:
 * The string Last digit of, followed by n, followed by
 * the string is, followed by
 * if the last digit of n is greater than 5:
 * the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is ", n);
	if (n < 0)
		n *= -1;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("%i and is greater than 5\n", last_digit);
	else if (last_digit != 0 && last_digit < 6)
		printf("%i and is less than 6 and not 0\n", last_digit);
	else if (last_digit == 0)
		printf("%i and is 0\n", last_digit);

	return (0);
}
