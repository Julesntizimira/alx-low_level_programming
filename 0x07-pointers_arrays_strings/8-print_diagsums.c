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

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d", sum1, sum2);
	printf("\n");
}

