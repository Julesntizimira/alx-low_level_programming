#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - checks for lowercase
 * @n: int parameter
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
}
