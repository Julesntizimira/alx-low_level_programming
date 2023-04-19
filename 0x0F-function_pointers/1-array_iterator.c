# include "function_pointers.h"
/**
 * array_iterator - funct
 * @size: input
 * @action: funct
 * @array: input
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((size > 0) && (array!= NULL))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
