#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 at success.
*/

int main(void)
{
	long int a = 1, b = 0, c = 0, s;

	while (c++ < 50)
	{
		s = a + b;
		printf("%li", s);
		(c == 50) ? (c = c) : printf(", ");
		b = a;
		a = s;
	}
	printf("\n");
	return (0);
}
