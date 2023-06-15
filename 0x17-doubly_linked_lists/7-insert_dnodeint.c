# include "lists.h"
/**
 * insert_dnodeint_at_index - returns the nth node
 * @h: node head
 * @idx: the position of node
 * @n: data
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = NULL, *newnode = NULL;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
				return (NULL);
			newnode->n = n;
			newnode->prev = tmp;
			if (tmp->next != NULL)
			{
				newnode->next = tmp->next;
				tmp->next->prev = newnode;
			}
			tmp->next = newnode;
			return (newnode);
		}
		count++;
		tmp = tmp->next;
	}
	if (count == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
