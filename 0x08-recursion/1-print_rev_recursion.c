# include "main.h"
/**
 * _print_rev_recursion - funct
 * @s: input
 */

void _print_rev_recursion(char *s)
{
	char *v = s;

	if (*v == '\0')
	{
		return;
	}
	_print_rev_recursion(v + 1);
	_putchar(*v);
}
