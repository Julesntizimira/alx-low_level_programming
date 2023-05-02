# include "lists.h"
/**
 * print_listint_safe - function
 * @head: headnode;
 * Return: unsigned int
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL, *nextnode = NULL;
	size_t count = 0;

	temp = head;
	nextnode = temp;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		count++;
		nextnode = temp->next;
		if (nextnode >= temp)
		{
			printf("-> [%p] %d\n", (void *)nextnode, nextnode->n);
			break;
		}
		temp = nextnode;
	}
	return (count);
}
