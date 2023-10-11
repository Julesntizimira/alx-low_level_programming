# include <stdio.h>
# include <math.h>
# include "search_algos.h"
/**
 * jump_list -  jumpy search algorithm using linked list
 *
 * @list: input singly linked list
 * @size: size of input list
 * @value: value to search
 *
 * Return: return the  index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start = list, *end = list;
	size_t new_end;

	if (list == NULL || size == 0)
		return (NULL);
	new_end = sqrt(size) + start->index;
	while (end->n < value && start->index < size && end->next != NULL)
	{
		start = end;
		new_end = sqrt(size) + start->index;
		while (end->next != NULL && end->index != new_end)
			end = end->next;
		printf("Value checked at index [%ld] = [%d]\n",
				end->index, end->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			start->index, new_end);
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
