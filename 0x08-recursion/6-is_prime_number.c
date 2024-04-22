#include "main.h"

/**
 * prime - function takes an integer n and incremental int m.
 *
 * @n: integer.
 * @m: n - 1.
 * Return: returns 1 if the n is a prime number,
 * otherwise return 0.
 */

int prime(int n, int m)
{
	if (m >= n / 2)
		return (1);

	if (n % m == 0)
		return (0);

	return (prime(n, m + 1));
}

/**
 * is_prime_number -  a function that returns 1 if the
 * input integer is a prime number,
 * otherwise return 0.
 *
 * @n: number.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, 2));
}
