#include "main.h"
/**
 * print_number - printing the upper
 *
 * @n: inputs
 */
void print_number(int n)
{
	int i, p;

	i = 0;
	if ((n < 0) && (n > -2147483648))
	{
		_putchar('-');
		n = n * -1;
	}
	if ((n < 10) && (n >= 0))
		_putchar(n + '0');
	else if ((n >= 10) && (n <= 2147483647))
	{
		if ((n >= 10) && (n < 100))
			p = 10;
		else if ((n >= 100) && (n < 1000))
			p = 100;
		else if ((n >= 1000) && (n < 10000))
			p = 1000;
		else if ((n >= 10000) && (n < 100000))
			p = 10000;
		else if ((n >= 100000) && (n < 1000000))
			p = 100000;
		else if ((n >= 1000000) && (n < 10000000))
			p = 1000000;
		else if ((n >= 10000000) && (n < 100000000))
			p = 10000000;
		else if ((n >= 100000000) && (n < 1000000000))
			p = 100000000;
		else if (n >= 1000000000)
			p = 1000000000;
		while (p >= 10)
		{
			i = (n / p);
			_putchar(i + '0');
			n = (n % p);
			p = p / 10;
			if (p == 1)
				_putchar(n + '0');
		}
	}
}
