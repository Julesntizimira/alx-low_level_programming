#include "main.h"

/**
 * print_triangle - printing the uppe
 * @size: input
 */

void print_triangle(int size)
{
	int n;

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
				if (i > (n - j))
				{
					_putchar(' ');
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
