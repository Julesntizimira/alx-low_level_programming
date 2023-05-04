# include "main.h"

/**
 * get_bit - function to return buffer at certain index
 * @n: input Uint
 * @index: input
 * Return: bit at certain position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx = 0, i = 0, *ptr = NULL;

	ptr = malloc((index + 1) * sizeof(unsigned int));
	if (ptr == NULL)
		return (-1);
	do {
		i = n / 2;
		ptr[idx] = n % 2;
		n = i;
		if (idx == index)
			return (ptr[idx]);
		idx++;
	} while (n > 0);

	return (-1);

}
