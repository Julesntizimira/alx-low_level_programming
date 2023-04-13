# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * array_range - funct
 * @min: input
 * @max: input
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int n;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;

	ptr = malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	return (ptr);

}
