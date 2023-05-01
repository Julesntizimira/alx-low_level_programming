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
	listint_t *temp = NULL, *new = NULL, *current = NULL;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL)
	{
		if (idx == 0)
			*head = new;
		else
			return (NULL);
	}
	else
	{
		current = *head;
		if (idx == 0)
			*head = new;
		else
		{
			for (count = 0; count < idx; count++)
			{
				temp = current;
				if (current->next == NULL)
				{
					if (count == idx - 1)
					{
						current->next = new;
						return (new);
					}
					else
						return (NULL);
				}
				current = current->next;
			}
			temp->next = new;
		}
		new->next = current;
	}
	return (new);
}
