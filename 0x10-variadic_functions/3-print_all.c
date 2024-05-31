#include <stdio.h>
#include <stdarg.h>

void print_all(const char *const format, ...)
{
	unsigned int i = 0;
	char *string;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			string = va_arg(ap, char *);
			printf("%s", string ? string : "(nil)");
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
