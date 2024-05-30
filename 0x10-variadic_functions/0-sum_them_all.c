#include <stdarg.h>

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The list of integers (variadic arguments).
 *
 * Description:
 * This function takes a variable number of arguments (integers) and calculates
 * their sum. It uses the va_list, va_start, and va_arg macros to handle the
 * variadic arguments.
 *
 * Return: The sum of the provided integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* Declare a va_list variable */
	unsigned int i = 0, sum = 0;

	va_start(ap, n); /* Initialize the va_list with the last named argument */

	while (i++ < n)
	{
		/* Retrieve the next argument as an integer */
		sum += va_arg(ap, int);
	}

	va_end(ap); /* Clean up the va_list */

	return (sum);
}
