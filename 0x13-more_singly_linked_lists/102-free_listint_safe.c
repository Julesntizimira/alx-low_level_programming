# include "lists.h"

/**
 * free_listint_safe - a function that frees a linked list
 * @head: pointer
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *temp = NULL;
	size_t count = 0;
	int len_diff;


	if (!head || !*head)
		return (0);

	while (*head)
	{
		len_diff = *head - (*head)->next;
		if (len_diff > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}
	*head = NULL;
	return (count);
}
