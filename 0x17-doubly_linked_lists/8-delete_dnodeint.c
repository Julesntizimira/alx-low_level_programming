# include "lists.h"
/**
 * delete_dnodeint_at_index - returns the nth node
 * @head: node head
 * @index: the position of node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next != NULL)
		{
			*head = tmp->next;
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (count == index)
		{
			if (tmp->next != NULL)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			else
				tmp->prev->next = (NULL);
			free(tmp);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
