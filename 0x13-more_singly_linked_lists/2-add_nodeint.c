# include "lists.h"
/**
 * add_nodeint- function
 * @head: struct node head;
 * @n: int
 * Return: ptr to new sdded node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
