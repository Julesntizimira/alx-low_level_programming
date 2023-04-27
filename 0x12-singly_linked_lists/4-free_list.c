# include "lists.h"
/**
 * free_list - function that adds node to the beginning
 * @head: pointer to node head
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
