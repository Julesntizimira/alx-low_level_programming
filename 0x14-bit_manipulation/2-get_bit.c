# include "main.h"

/**
 * get_bit - function to return bit at certain index
 * @n: input Uint
 * @index: input
 * Return: bit at certain position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = 0, i = 0, b = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	do {
		i = n / 2;
		b = n % 2;
		n = i;
		if (idx == index)
			return (b);
		idx++;
	} while (n > 0 && idx <= index);

	return (-1);
}
