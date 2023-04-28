# include "lists.h"


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *p = NULL;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free(*head);
		return (1);
	}
	else
	{
		ptr = *head;
		while(count != index)
		{
			if (ptr->next == NULL)
				return (-1);
			count++;
			ptr = ptr->next;
		}
		p = ptr;
		ptr = p->next;
		free(p);
	}
	return (1);
}
