# include "lists.h"

/**
 * list_len - function
 * @h: node head
 * Return: unsigned int number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
