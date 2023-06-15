# include "lists.h"
/**
 * dlistint_len - prints number of elements of a dlistint_t list.
 * @h: input node
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
