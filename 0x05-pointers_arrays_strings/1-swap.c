# include "main.h"
# include <stdio.h>
/**
 * swap_int - swaping values
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;

	*a = j;
	*b = i;

}
