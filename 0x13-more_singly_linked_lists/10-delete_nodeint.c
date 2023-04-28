# include "lists.h"
/**
 * delete_nodeint_at_index - funct
 * @head: head node
 * @index: index at which we need to delete the node
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *p = NULL;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (count != index)
	{
		if (ptr->next == NULL)
			return (-1);
		p = ptr;
		ptr = ptr->next;
		count++;
	}
	if (ptr->next)
		p->next = ptr->next;
	free(ptr);
	return (1);
}
