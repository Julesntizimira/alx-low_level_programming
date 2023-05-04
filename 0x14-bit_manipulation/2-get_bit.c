# include "main.h"

/**
 * get_bit - function to return buffer at certain index
 * @n: input Uint
 * @index: input
 * Return: bit at certain position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = 0, i = 0;
	int b = 0;

	do {
		i = n / 2;
		b = n % 2;
		n = i;
		if (idx == index)
			return (b);
		idx++;
	} while (n > 0);

	return (-1);

}
