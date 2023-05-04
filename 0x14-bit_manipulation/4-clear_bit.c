# include "main.h"
/**
 * clear_bit - function to clear bit
 * @n: input
 * @index: input
 * Return: 1 or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);
	mask = 1 << index;
	*n = *n & (~mask);

	return (1);
}
