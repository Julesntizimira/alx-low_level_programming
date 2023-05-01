# include "lists.h"
/**
 * delete_nodeint_at_index - funct
 * @head: head node
 * @index: index at which we need to delete the node
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL, *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
	}
	else
	{
		while (count < index)
		{
			temp = current;
			if (current->next == NULL)
			{
				return (-1);
			}
			current = current->next;
			count++;
		}
		temp->next = current->next;
	}
	free(current);
	return (1);
}
