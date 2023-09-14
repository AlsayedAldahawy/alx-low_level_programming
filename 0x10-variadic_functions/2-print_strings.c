#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @n: the number of integers passed to the function.
 * @separator:  is the string to be printed between the strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (!string)
			string = "(nil)";

		printf("%s", string);

		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
