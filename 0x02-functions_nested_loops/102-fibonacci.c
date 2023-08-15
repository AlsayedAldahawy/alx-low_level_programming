#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 if success
 */

int main(void)
{
	long f0 = 1, f1 = 2, f2;
	int i;

	printf("%ld", f0);
	printf(", ");
	printf("%ld", f1);
	printf(", ");

	for (i = 0; i < 50; i++)
	{
		f2 = f1 + f0;

		printf("%ld", f2);
		f0 = f1;
		f1 = f2;

		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
