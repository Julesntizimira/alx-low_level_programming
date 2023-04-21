#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - funct
 * @format: input
 */
void print_all(const char * const format, ...)
{
	const char *ptr = format;
	va_list args;
	int i = 0;
	float f;
	char *s, c, *v = "";

	va_start(args, format);
	if (format)
	{
		while (*ptr)
		{
			switch (*ptr)
			{
				case 'c':
					c = va_arg(args, int);
					printf("%s%c", v, c);
					break;
				case 'i':
					i = va_arg(args, int);
					printf("%s%d", v, i);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%s%f", v, f);
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						printf("(nil)");
					printf("%s%s", v, s);
					break;
				default:
					break;
			}
			v = ", ";
			ptr++;
		}
		printf("\n");
		va_end(args);
	}
}
