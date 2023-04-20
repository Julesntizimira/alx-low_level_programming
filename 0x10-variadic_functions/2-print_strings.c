# include <stdio.h>
# include <stdarg.h>
/**
 * print_strings - funct
 * @separator: input
 * @n: input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s = NULL;


	if (n != 0)
	{
		va_start(args, n);

		for(i = 0; i < n; i++)
		{
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s", s);
			if (s == NULL)
				printf("(nil)");
			if (i == n - 1)
				break;
			if (separator != NULL)
				printf("%s", separator);
                }
		printf("\n");
		va_end(args);
	}
}
