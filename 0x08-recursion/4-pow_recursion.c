#include "main.h"

/**
 * _pow_recursion - a function that returns the value of
 * x raised to the power of y.
 *
 * @x: number.
 * @y: power.
 *
 * Return: returns the value of x ^ y.
 * If y is lower than 0, the function should return -1.
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
