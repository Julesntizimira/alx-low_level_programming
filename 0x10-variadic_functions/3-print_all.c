#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - funct
 * @format: input
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int k = 0;
	char *s, *v = "";

	va_start(args, format);
	while (format == NULL)
	{
		return;
	}
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", v, (char)va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", v, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", v, (float)va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", v, s);
					break;
				default:
					k++;
					continue;
			}
			v = ", ";
			k++;
		}
		printf("\n");
		va_end(args);
	}
}
