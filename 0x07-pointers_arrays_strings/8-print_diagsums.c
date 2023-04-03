# include "main.h"
# include <stdio.h>
/**
 * print_diagsums - prints the sum of the elements on the main diagonal and
 * the secondary diagonal of a square matrix of integers
 *
 * @a: pointer to a 2D array of integers representing the square matrix
 * @size: integer representing the size of the square matrix
 * Return: void.
 */

void print_diagsums(int *a[], int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[i][j];
			}

		}
	}

	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == size - 1)
			{
				sum2 = sum2 + a[i][j];
			}
		}
	}
	printf("%d, %d", sum1, sum2);
	printf("\n");
}
