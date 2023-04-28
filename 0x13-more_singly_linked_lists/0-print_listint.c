# include "lists.h"
/**
 * print_listint - function
 * @h: struct node head;
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
