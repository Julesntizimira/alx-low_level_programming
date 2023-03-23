#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, z, j;

	j = 612852475143;

	z = 0;

	i = 2;
	while (i < j)
	{
		if ((j % i) == 0)
		{
			z = i;
		}
		i++;
	}
	printf("%lu \n ", i);


	return (0);
}
