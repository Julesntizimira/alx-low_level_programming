#include <stdio.h>
/**
 * rint_sign - checks for lowercase
 * @n: is an argument of type int
 * Returns: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returns: -1 and prints - if n is less than zeroe
 */

int rint_sign(int n)
{
	if (n	>	0)
	{
                return (1);
		putchar(43);
        }
        else if (n == 0)
	{
		return  (0);
		putchar(48);
	}
	else
	{
		return (-1);
		putchar(45);
	}
}
