# include "lists.h"

/**
 * print_list - function
 * @h: node head
 * Return: unsigned int number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
	return (count);
}
