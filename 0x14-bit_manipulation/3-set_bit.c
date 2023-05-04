# include "main.h"
/**
 * set_bit - set-bit function
 * @n: integer pointer
 * @index: position pointer
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
		return (-1);

	*n = mask | *n;
	return (1);
}
