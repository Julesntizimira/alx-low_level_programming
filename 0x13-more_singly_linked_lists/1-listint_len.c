# include "lists.h"
/**
 * listint_len - function
 * @h: struct node head;
 * Return: unsigned int
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
