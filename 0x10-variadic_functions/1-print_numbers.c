# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"
/**
 * print_numbers - funct
 * @n: input
 * @separator: input
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			printf("%d", x);
			if (i == n - 1)
				break;
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
