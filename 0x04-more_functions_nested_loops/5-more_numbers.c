#include "main.h"

/**
 * more_numbers - printing the uppe
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
		for (i = 0; i <= 4; i++)
		{
			_putchar(1 + '0');
			_putchar(i + '0');
		}
		putchar('\n');
	}
}
