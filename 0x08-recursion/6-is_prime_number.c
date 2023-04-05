# include "main.h"

/**
 * is_prime_number - funct
 * @n: input
 * @j: input
 * Return: 1,0
 */

int primehelp(int n, int j);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primehelp(n, 2));
}

/**
 * primehelp - funct
 * @n: input
 * @j: input
 * Return: 1,0
 */
int primehelp(int n, int j)

{
	if (j == n)
		return (1);
	if ((n % j) == 0)
	{
		return (0);
	}
	return (primehelp(n, (j + 1)));
}
