# include "lists.h"
/**
 * loopch - function to check for loop
 * @head: input head node
 * Return: node where the loop has started
 */
listint_t *loopch(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;
	listint_t *temp = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			while (slow != temp)
			{
				slow = slow->next;
				temp = temp->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
/**
 * free_listint_safe - function to free list
 * @h: input headnode
 * Return: Unsigned int count of node freed;
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *ptr = NULL;
	size_t count = 0;

	if (!*h || !h)
		return (0);
	ptr = loopch(temp);

	if (ptr == NULL)
	{
		while (temp->next != NULL)
		{
			*h = temp->next;
			free(temp);
			count++;
			temp = *h;
		}
	}
	else
	{
		while (temp != ptr)
		{
			*h = temp->next;
			free(temp);
			count++;
			temp = *h;
		}
		*h = temp->next;
		temp = *h;
		do {
			*h = temp->next;
			free(temp);
			count++;
			temp = *h;
		} while (temp != ptr);
	}
	free(temp);
	count++;
	*h = NULL;
	return (count);
}
