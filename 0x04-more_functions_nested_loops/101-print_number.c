#include "main.h"

/**
 * print_number - printing the upper
 *
 * @n: inputs
 */

void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		n *= -1;
		j = n;
		_putchar('-');
	}
	j /= 10;
	if (k != 0)
		print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
