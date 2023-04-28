# include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head: pointer
 * @index: index
 * Return: nth pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (count != index)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		count++;
		ptr = ptr->next;
	}
	return (ptr);

}
