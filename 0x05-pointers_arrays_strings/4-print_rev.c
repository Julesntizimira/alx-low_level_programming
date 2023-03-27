# include "main.h"
# include <stdio.h>
/**
 * print_rev - print in reverse
 *
 * @s: input pointer
 */

void print_rev(char *s)
{

	char *i = s;

	while (*i != '\0')
	{
		i++;
	}
	while (i >= s)
	{
		char c;

		c = *i;
		_putchar(c);
		i--;
	}

	_putchar('\n');

}
