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
	int i;
	float f;
	char *s, c;
	int printed = 0;

	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				break;
		}
		ptr++;
		if (*ptr && printed)
			printf(", ");
		printed = 1;
	}
	printf("\n");
	va_end(args);
}
