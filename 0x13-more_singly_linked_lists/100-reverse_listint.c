# include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *p = NULL;
	if ((*head) == NULL)
		return (NULL);

	ptr = *head;
	if (ptr->next == NULL)
		return(ptr);
	p = ptr->next;
	while (p->next != NULL)
	{
		ptr = *head;
		*head = p;
		p = p->next;
		(*head)->next = ptr;
	}
	ptr = *head;
	*head = p;
	p->next = ptr;
	return (p);
}
