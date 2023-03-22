#include <stdio.h>
#include"main.h"
/**
 * print_naturals - print natural number
 */

void print_naturals(void)
{
	int i, j;

	j = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			j = j + i;
		}
	}
	printf("%d", j);
	putchar('\n');
}
/**
 * main - starting point
 *
 * return: always return 0 (success)
 */
int main(void)
{
       	print_naturals();
	return (0);
}
