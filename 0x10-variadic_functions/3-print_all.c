#include <stdio.h>
#include <stdarg.h>
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
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", v, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", v, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", v, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						printf("(nil)");
					printf("%s%s", v, va_arg(args, char *));
					break;
				default:
					break;
			}
			v = ", ";
			k++;
		}
		printf("\n");
		va_end(args);
	}
}
