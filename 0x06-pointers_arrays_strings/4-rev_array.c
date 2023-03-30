# include "main.h"

/**
 * reverse_array - function
 * @a: input
 * @n: input
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		j = *(a + i);
		*(a + i) = *(a + n - i);
		*(a + n - i) = j;
		n--;
	}
}
