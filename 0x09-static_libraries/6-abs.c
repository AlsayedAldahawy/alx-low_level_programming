#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n : number to find its absolute.
 * Return: the absolute.
*/

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
