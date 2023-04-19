# include "function_pointers.h"
/**
 * int_index - funct
 * @size: size
 * @array: input array
 * @cmp: funct pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size)
	{
		if (cmp(array[i]) != 0)
			return (i)
	}
	return (-1);
}
