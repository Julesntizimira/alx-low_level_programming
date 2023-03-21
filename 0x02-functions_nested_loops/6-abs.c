#include <stdio.h>
/**
 * _abs - checks for lowercase
 * @n: is an argument of type int
 * Returns: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returns: -1 and prints - if n is less than zeroe
 */
int _abs(int i)
{
	if ( i >= 0)
	{
		return (i);
	}
	else
	{
		return ( i * (-1));
	}
}
