# include "lists.h"
/**
 * loopcheck - function
 * @head: headnode;
 * Return: unsigned int
 */
const listint_t *loopcheck(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (fast);
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - function
 * @head: headnode;
 * Return: unsigned int
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = NULL, *temp = head;
	size_t count = 0;

	ptr = loopcheck(head);
	if (ptr == NULL)
	{
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp = temp->next;
		}

	}
	else
	{
		while (ptr != temp)
		{
			ptr = ptr->next;
			temp = temp->next;
		}
		temp = head;
		while (temp != ptr)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp = temp->next;
		}
		do {
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp = temp->next;
		} while (temp != ptr);
		printf("-> [%p] %d\n", (void *)temp, temp->n);
	}
	return (count);
}
