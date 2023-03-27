# include "main.h"
# include <stdio.h>
/**
 * puts_half - print in reverse
 *
 * @str: str
 */

void puts_half(char *str)
{
	int i = 0;
	char *n = str;

	while (*n != '\0')
	{
		n++;
		i++;
	}

	if ((i % 2) != 0)
		i++;
	i = i / 2;
	str = str + i;
	while (str < n)
	{
		char c;

		c = *str;
		_putchar(c);
		str++;
	}
	_putchar('\n');
}
