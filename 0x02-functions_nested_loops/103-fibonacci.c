#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms,
 * not exceed 4,000,000, followed by a new line.
 * Return: 0 at success.
*/

int main(void)
{
	long int a = 1, b = 0, s = 0;

	while (s <= 4000000)
	{
		s = a + b;
		b = a;
		a = s;

		if (s % 2)
			continue;

		printf("%li", s);
		(s == 3524578) ? (s = s) : printf(", ");
	}
	printf("\n");
	return (0);
}
