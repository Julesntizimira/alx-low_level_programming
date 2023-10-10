# include <stdio.h>
# include <math.h>
/**
 * jump_search -  binary search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);
	start = end = 0;

	while (array[end] < value && start < size)
	{
		start = end;
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		end = sqrt(size) + start;

		if (end > size - 1)
			break;

	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (end > size - 1)
		end = size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
