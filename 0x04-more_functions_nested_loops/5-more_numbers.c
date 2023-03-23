#include "main.h"

/**
 * more_numbers - printing the uppe
 */

void more_numbers(void)
{
	int i, j, z;

	for (z = 0; z < 10; z++)
	{
		for (j = 0; j <= 1; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if ((j == 1) && (i == 5))
					break;
				if (j == 1)
				{
					_putchar(j + '0');
				}
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
