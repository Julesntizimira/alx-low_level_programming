# include "main.h"

/**
 * get_bit - function to return bit at certain index
 * @n: input Uint
 * @index: input
 * Return: bit at certain position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v = 0;
	
	if (index > 63)
		return (-1);
	
	v = (n >> index) & 1;
	return (v);
}
