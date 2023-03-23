#include "main.h"

/**
 * print_square - printing the uppe
 * @size: input
 */

void print_square(int size)
{
	int n, i, j;

	n = size;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
