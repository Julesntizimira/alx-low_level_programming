# include "main.h"
# include <stdio.h>

/**
 * _puts - function
 *
 * @str: string iput
 */

void _puts(char *str)
{

	char c;

	while (*str != '\0')
	{

		c = *str;
		_putchar(c);

		str++;

	}
	_putchar('\n');

}
