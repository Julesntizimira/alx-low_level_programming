# include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head: node head
 * @idx: input index
 * @n: input
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL, *p = NULL;
	unsigned int count = 0;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = p;
		return (p);
	}
	else
	{
		ptr = *head;
		while (count <= idx)
		{
			if (ptr->next == NULL)
				return (NULL);
			count++;
			ptr = ptr->next;
		}
		p->next = ptr->next;
		ptr->next = p;
	}
	return (p);
}
