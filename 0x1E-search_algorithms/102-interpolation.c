# include <stdio.h>
/**
 * interpolation_search -  interpolation search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pros;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low < high + 1)
	{
		pros = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pros > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pros);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pros, array[pros]);
		if (array[pros] == value)
			return (pros);
		else if (array[pros] > value)
			high = pros - 1;
		else
			low = pros + 1;
	}
	return (-1);
}
