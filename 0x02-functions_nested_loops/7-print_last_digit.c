#include <stdio.h>
/**
 * print_last_digit - checks for lowercase
 * @i: is an argument of type int
 * Return: return the remainder
 */

int print_last_digit(int i)
{

	if ((i < 10) && (i >= 0))
	return i;
	else
	return (i % 10);

}
