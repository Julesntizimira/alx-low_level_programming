# include "lists.h"
/**
 * pop_listint - function
 * @head: inpud node head;
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	int n = 0;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
