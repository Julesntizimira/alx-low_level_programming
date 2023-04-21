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
	char *s;

	va_start(args, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						printf("(nil)");
					printf("%s", s);
					break;
				default:
					k++;
					continue;
			}
			if (format[k + 1] != '\0')
				printf(", ");
			k++;
		}
		printf("\n");
		va_end(args);
	}
}
