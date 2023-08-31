#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a number.
 *
 * @x: number.
 *
 * Return: returns the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 *
 */
int squareroot(int n, int m)
{
    if ( m * m == n)
    {
        return (m);
    }
    if (m * m < n)
    {
        return (squareroot(n, m + 1));
    }

    return (-1);
    
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }

    return (squareroot(n, 0));
}
