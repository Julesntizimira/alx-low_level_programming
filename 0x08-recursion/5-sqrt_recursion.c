# include "main.h"

/**
 * _sqrt_recursion - funct
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		return (1);

	else if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			if ((i * i) == n)
				return (i);
		}
	}

	return (-1);
}
