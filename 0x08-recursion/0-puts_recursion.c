# include "main.h"
/**
 * _puts_recursion - function
 * @s: input
 */

void _puts_recursion(char *s)
{
	char *v = s;

	if (*v == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*v);
	_puts_recursion(v + 1);


}
