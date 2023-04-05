# include "main.h"

/**
 * factorial - funct
 * @n: input
 * Return: 0,-1, other number
 */

int factorial(int n)
{

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));

}
