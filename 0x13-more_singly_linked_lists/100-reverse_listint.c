# include "lists.h"
/**
 * reverse_listint - function that reverse the list
 * @head: pointer to head node
 * Return: pointer to the head of  reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head, *current = *head;

	if (current == NULL || current->next)
		return (current);

	temp = current->next;
	while (temp)
	{
		*head = temp;
		if (temp->next == NULL)
		{
			break;
		}
		temp = temp->next;
		(*head)->next = current;
		current = *head;
	}
	return (temp);
}
