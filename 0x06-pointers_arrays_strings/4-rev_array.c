# include "main.h"

/**
 * reverse_array - function
 * @a: input
 * @n: input
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	if (n >= 0)
	{
		for (i = 0, k = n - 1; i < k; i++, k--)
		{
			j = a[i];
			a[i] = a[k];
			a[k] = j;
			n--;
		}
	}
}
