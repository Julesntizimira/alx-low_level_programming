# include "main.h"

/**
 * flip_bits - funct
 * @n: input
 * @m: input
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, i = 0;

	mask = n ^ m;

	while (mask > 0)
	{
		i += (mask & 1);
		mask = mask >> 1;
	}
	return (i);
}
