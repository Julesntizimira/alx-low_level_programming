#include "main.h"

/**
 * print_triangle - printing the uppe
 * @size: input
 */

void print_triangle(int size)
{
	int i, j, n;

	n = size;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i > (n - j))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
