#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i = 2, pf, n = 612852475143;

	while (i < 782849)
	{
		if (n % i == 0)
		{
			n = n / i;
			pf = i;
		}
		else
			i++;
	}
	printf("%ld\n", pf);
	return (0);
}
