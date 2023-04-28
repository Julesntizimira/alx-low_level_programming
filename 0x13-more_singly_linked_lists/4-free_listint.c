# include "lists.h"
/**
 * free_listint - function
 * @head: head node;
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
