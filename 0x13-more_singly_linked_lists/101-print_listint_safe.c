# include "lists.h"
/**
 * print_listint_safe - function
 * @head: headnode;
 * Return: unsigned int
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *next_node = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		next_node = current->next;

		if (next_node >= current)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}
		current = next_node;
	}
	return (count);
}
