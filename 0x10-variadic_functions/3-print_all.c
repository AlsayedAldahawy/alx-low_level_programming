#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 's':
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
