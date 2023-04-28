# include "lists.h"
/**
 * sum_listint - function
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = NULL;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	while (ptr->next != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;

	}
	sum += ptr->n;
	return (sum);
}
