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
	unsigned long i, z, j, k;

	j = 612852475143;
	k = sqrt(612852475143);
	z = 0;
	i = 2;
	while (i < j)
	{
		if ((k % i) == 0)
		{
			z = i;
		}
		i++;
	}
	printf("%lu \n ", z);


	return (0);
}
