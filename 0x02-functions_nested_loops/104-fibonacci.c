#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 at success.
*/

int main(void)
{
	long int a1 = 1, a2 = 0, b1 = 0, b2 = 0, c = 0, s1, s2;

	while (c <= 80)
	{
		s1 = a1 + b1;
		b1 = a1;
		a1 = s1;
		printf("%li, ", s1);
		c++;
	}

	a2 = a1 % 1000000;
	a1 = a1 / 1000000;
	b2 = b1 % 1000000;
	b1 = b1 / 1000000;

	while (c < 98)
	{
		s1 = (a1 + b1);
		s2 = a2 + b2;
		printf("%li", s1);
		printf("%li", s2);
		c < 97 ? (printf(", ")) : (c = c);
		b1 = a1;
		b2 = a2;
		a1 = s1;
		a2 = s2;
		c++;
	}

	printf("\n");
	return (0);
}
