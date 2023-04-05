# include "main.h"

/**
 * _sqrt_recursion - funct
 * @n: input
 * @j: input
 * Return: int
 *
 */

int minus(int n, int j);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (minus(n, 1));
}

/**
 * minus - funct
 * @n: input
 * @j: input
 * Return: int
 */

int minus(int n, int j)
{
	if (j * j == n)
		return (j);

	if (j * j > n)
		return (-1);
	return (minus(n, j + 1));
}

