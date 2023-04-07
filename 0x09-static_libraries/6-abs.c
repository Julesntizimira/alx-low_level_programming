#include <stdio.h>
/**
 * _abs - checks for lowercase
 * @i: is an argument of type int
 * Return: i if i is greater than zero and i*(-1) if i less than 0
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * (-1));
	}
}
