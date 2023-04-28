# include "lists.h"
/**
 * add_nodeint_end - function
 * @head: struct node head;
 * @n: int
 * Return: ptr to new sdded node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL, *p = NULL;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = p;
	return (p);
}
