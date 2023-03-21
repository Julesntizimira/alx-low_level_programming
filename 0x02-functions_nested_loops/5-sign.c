#include <stdio.h>
#include "main.h"
/**
 * rint_sign - checks for lowercase
 * @n: is an argument of type int
 * Return: 1 , 0, -1 respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return(-1);
	}
}
