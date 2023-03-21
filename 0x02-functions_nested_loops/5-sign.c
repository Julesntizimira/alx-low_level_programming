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
		_putchhar('+');
		_putchhar(',');
		_putchhar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchhar('0');
		_putchhar(',');
		_putchhar(' ');
		return (0);
	}
	else
	{
		_putchhar('-');
		_putchhar(',');
		_putchhar(' ');
		return(-1);
	}
}
