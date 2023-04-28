# include "lists.h"
/**
 * pop_listint - function
 * @head: inpud node head;
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = NULL;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	return ((*head)->n);
}
