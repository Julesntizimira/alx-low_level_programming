# include "main.h"
# include <stdio.h>
/**
 * puts2 - print in reverse
 *
 * @str: str
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		char c;

		c = *str;
		_putchar(c);
		str += 2;
	}
	_putchar('\n');
}
