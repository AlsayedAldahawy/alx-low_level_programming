#include "main.h"

/**
 * is_prime_number -  a function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: number.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 */

int prime_n_1 (int n, int m)
{
    if (m == 1)
    {
        return (1);
    }

    if (n % m != 0)
    {
        return (prime_n_1(n, m - 1));
    }
    return (0);
}

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }

    return(prime_n_1(n, n - 1));
}

