#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - checks for lowercase
 * @n: is an argument of type int
 * Return: return the remainder
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
