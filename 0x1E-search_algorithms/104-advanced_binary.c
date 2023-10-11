# include <stdio.h>
# include "search_algos.h"
/**
 * advanced_binary -  binary search algorithm
 *
 * @array: input array
 * @size: size of input array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	return (ab_helper(array, start, end, value));
}
/**
 * ab_helper - help advanced_binary in recursion
 *  * @array: input array
 * @start: start of sub array
 * @end: end of sub array
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
int ab_helper(int *array, size_t start, size_t end, int value)
{
	size_t i, mid;
	
	if (start < end + 1)
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
	if (array[mid] == value && start == mid)
		return (mid);
	if (start < end + 1)
	{
		if (array[mid] == value)
			return (ab_helper(array, start, mid, value));
		else if (array[mid] < value)
			return (ab_helper(array, mid + 1, end, value));
		else
			return (ab_helper(array, start, mid - 1, value));
	}
	return (-1);
}
