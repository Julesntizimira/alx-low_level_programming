# include "main.h"
# include <stdio.h>
/**
 * print_rev - print in reverse
 *
 * @s: input pointer
 */ 

void print_rev(char *s)
{
	int i, j, z;
	char c;

	i = 0;
	while(*s != '\0')
	{
		i++;
		s++;
	}
	
	z = i;

	for ( j = (z-1); j <= 0; j--)
	{
		c = s[j];
		_putchar(c);

	}

	_putchar('\n');

}
