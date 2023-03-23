#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, z, k, j;

	j = 612852475143;
	k = sqrt(612852475143);
	z = 0;
	for (i = 1; i <= k; i++)
	{
		if (j % i == 0)
		{
			z = j / i;
		}
	}
	printf("%lu\n", z);


	return (0);
}
