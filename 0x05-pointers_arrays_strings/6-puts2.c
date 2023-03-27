# include "main.h"
# include <stdio.h>
/**
 * puts2 - print in reverse
 *
 * @str: str
 */

void puts2(char *str)
{
	char *n = str;

	while (*n != '\0')
	{
		n++;
	}
	n--;

	while (str <= n)
	{
		char c;

		c = *str;
		_putchar(c);
		str += 2;
	}
	_putchar('\n');
}
