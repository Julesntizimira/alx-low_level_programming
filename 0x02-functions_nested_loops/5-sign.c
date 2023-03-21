#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks for lowercase
 * @n: is an argument of type int
 * Return: 1 , 0, -1 respectively
 */
int print_sign(int n)
{
	if (n > 0)
	{;
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
