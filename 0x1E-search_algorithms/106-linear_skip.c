# include <stdio.h>
# include <math.h>
# include "search_algos.h"
/**
 * linear_skip -  linear_skip algorithm using linked list
 *
 * @list: input singly linked list
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start = list, *end = list;

	if (list == NULL)
		return (NULL);
	while (end->n < value && end->express != NULL)
	{
		start = end;
		end = end->express;
		printf("Value checked at index [%ld] = [%d]\n",
				end->index, end->n);
		if (end->express == NULL && end->n < value)
		{
			start = end;
			while (end->next != NULL)
				end = end->next;
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			start->index, end->index);
	while (start->index <= end->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				start->index, start->n);
		if (start->n == value)
			return (start);
		if (start->next == NULL)
			break;
		start = start->next;
	}
	return (NULL);
}
