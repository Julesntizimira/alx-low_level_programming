# include "lists.h"
/**
 * reverse_listint - function that reverse the list
 * @head: pointer to head node
 * Return: pointer to the head of  reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;


	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}

