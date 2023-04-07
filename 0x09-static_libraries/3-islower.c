#include <stdio.h>
/**
 * _islower - checks for lowercase
 * @c: is an argument of type int
 * Return: 1 if true is lowercase and 0 otherwise
 */
int _islower(int c)
{

	if ((c	>=	97)	&&	(c	<=	122))
	{
		return (1);
	}
	else
		return (0);
}
