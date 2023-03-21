#include <stdio.h>
/**
 * rint_sign - checks for lowercase
 * @n: is an argument of type int
 * Returns: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returns: -1 and prints - if n is less than zeroe
 */

int print_sign(int n)
{
	int i, j, k;

	i = +1;
	j = 0;
	k= -1;

	if (n	>	0)
	{
		return (i);
		
        }
        else if (n == 0)
	{
		return(j);
	}
	else if (n < 0)
	{       
		return (k);
	}

	else 
		return (0);
}
