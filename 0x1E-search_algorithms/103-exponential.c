# include <stdio.h>
/**
 * exponential_search -  exponential_search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, start, mid, end;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", value);
		return (0);
	}
	for (i = 1; i <= size - 1; i *= 2)
	{
		if (array[i] > value)
			break;
		start = i;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	end = i;
	if (end > size - 1)
		end = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	while (start < end + 1)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
			else
				printf("\n");
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
