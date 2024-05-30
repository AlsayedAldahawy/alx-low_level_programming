#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings.
 * @separator: The string to print between strings (can be NULL).
 * @n: The number of strings to print.
 * @...: The list of strings (variadic arguments).
 *
 * Description:
 * This function takes a variable number of arguments (strings) and
 * prints them.
 * It uses the va_list, va_start, and va_arg macros to handle the variadic
 * arguments.
 * The separator string is printed between consecutive strings
 * (except after the last one).
 * If a string argument is NULL, it prints "nil" instead.
 *
 * Example:
 * print_strings(", ", 4, "apple", "banana", NULL, "cherry");
 * // Output: "apple, banana, nil, cherry"
 *
 * Return: None (void function).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap; /* Declare a va_list variable */
	char *arg;

	va_start(ap, n); /* Initialize the va_list with the last named argument */

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ap, char *); /* Retrieve the next argument as a string */

		printf("%s", arg ? arg : "(nil)"); /* Print the string or "nil" */

		if (separator && i < (n - 1))
		{
			printf("%s", separator); /* Print the separator if not the last string */
		}
	}

	printf("\n"); /* Print a newline character */
	va_end(ap);	  /* Clean up the va_list */
}
