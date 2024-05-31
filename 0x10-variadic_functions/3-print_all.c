#include "variadic_functions.h"

/**
 * print_all - Prints a variable number of arguments of different types.
 * @format: A list of format specifiers for the arguments.
 *   Possible specifiers: 'c' (char), 's' (string), 'i' (integer), 'f' (float).
 *   Any other specifier is ignored.
 *
 * Description:
 * This function takes a variable number of arguments and prints them based on
 * the provided format specifiers. It uses the va_list, va_start, and va_arg
 * macros to handle the variadic arguments.
 *
 * Example:
 * print_all("csi", 'H', "ello, world", 42); // Output: "Hello, world, 42"
 *
 * Return: None (void function).
 */
void print_all(const char *const format, ...)
{
	va_list args; /* Declare a va_list variable */
	int i = 0;
	char *str;

	va_start(args, format); /* Initialize the va_list with last named argument */

	while (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int)); /* Print a char argument */
				break;
			case 's':
				str = va_arg(args, char *); /* Retrieve a string argument */
				if (!str)
					str = "(nil)"; /* Handle NULL strings */
				printf("%s", str);
				break;
			case 'i':
				printf("%i", va_arg(args, int)); /* Print an integer argument */
				break;
			case 'f':
				printf("%f", va_arg(args, double)); /* Print a float argument */
				break;
			default:
				i++; /* Skip unknown specifiers */
				continue;
			}
			i++;
			if (format[i])
				printf(", "); /* Print the separator if not the last argument */
		}
		break; /* Exit the loop after processing the format string */
	}
	printf("\n"); /* Print a newline character */
	va_end(args); /* Clean up the va_list */
}
