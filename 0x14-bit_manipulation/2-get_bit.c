# include "main.h"

/**
 * get_bit - function to return buffer at certain index
 * @n: input Uint
 * @index: input
 * Return: bit at certain position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0, idx = 0;

	char buff[1000000] = {'\0'};

	do {
		i = n / 2;
		buff[idx++] = n % 2;
		n =  i;
	} while (n > 0);

	return (buff[index]);
}
