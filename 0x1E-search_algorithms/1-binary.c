# include <stdio.h>
/**
 * binary_search -  binary search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, mid, end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
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
