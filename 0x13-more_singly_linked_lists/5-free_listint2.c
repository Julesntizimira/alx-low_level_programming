# include "lists.h"
/**
 * free_listint2 - function
 * @head: head node;
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
