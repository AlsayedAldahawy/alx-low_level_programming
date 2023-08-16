#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	unsigned long int A, B, A1, A2, B1, B2;
	int i;

	A = 1;
	B = 2;

	printf("%lu", A);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", B);
		B = B + A;
		A = B - A;
	}

	A1 = A / 1000000000;
	A2 = A % 1000000000;
	B1 = B / 1000000000;
	B2 = B % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", B1 + (B2 / 1000000000));
		printf("%lu", B2 % 1000000000);
		B1 = B1 + A1;
		A1 = B1 - A1;
		B2 = B2 + A2;
		A2 = B2 - A2;
	}

	printf("\n");

	return (0);
}
