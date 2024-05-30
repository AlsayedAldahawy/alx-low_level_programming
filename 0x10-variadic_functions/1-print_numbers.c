#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers.
 * @separator: The string to print between numbers (can be NULL).
 * @n: The number of integers to print.
 * @...: The list of integers (variadic arguments).
 *
 * Description:
 * This function takes a variable number of arguments (integers) and prints
 * them.
 * It uses the va_list, va_start, and va_arg macros to handle the variadic
 * arguments.
 * The separator string is printed between consecutive numbers
 * (except after the last one).
 *
 * Example:
 * print_numbers(", ", 4, 10, 20, 30, 40); // Output: "10, 20, 30, 40"
 *
 * Return: None (void function).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap; /* Declare a va_list variable */

	va_start(ap, n); /* Initialize the va_list with the last named argument */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int)); /* Retrieve the next argument as an integer */

		if (separator && i < (n - 1))
		{
			printf("%s", separator); /* Print the separator if not the last number */
		}
	}

	printf("\n"); /* Print a newline character */
	va_end(ap);	  /* Clean up the va_list */
}
