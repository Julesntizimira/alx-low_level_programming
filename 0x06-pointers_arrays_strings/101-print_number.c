# include "main.h"

/**
 * print_number - print num
 *
 * @n: jenh
 */

void print_number(int n)
{
	int p = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n >= p * 10)
		p *= 10;
	while (p > 0)
	{
		int digit = n / p;

		_putchar(digit + '0');
		n %= p;
		p /= 10;
	}
}
