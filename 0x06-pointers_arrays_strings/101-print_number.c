# include "main.h"

/**
 * print_number - print num
 *
 * @n: jenh
 */

void print_number(int n)
{
	unsigned int v;
	int i, p;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n >= 10)
	{
		p = 1;
		v = n;
		while (v >= 10)
		{
			p = p * 10;
			v = v / 10;
		}
		while (p >= 10)
		{
			i = n / p;
			n %= p;
			_putchar(i + '0');
			p /= 10;
			while (p >= 10 && n < p)
			{
				_putchar(48);
				p /= 10;
			}

			if (p < 10)
				_putchar(n + '0');
		}
	}
}
