# include "main.h"
# include <stdio.h>
/**
 * print_diagsums - memset funct
 * @a: input
 * @size: input
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, sum;

	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				k = a[i][j];
				sum = sum + k;
			}

		}
	}
	printf("%d", sum);
	printf(", ");
	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == size)
			{
				k = a[i][j];
				sum = sum + k;
			}
		}
	}
	printf("%d", sum);
	printf("\n");
}
