# include "lists.h"

/**
 * add_node - function that adds node to the beginning
 * @head: pointer to node head
 * @str: string input
 * Return: poiter to new add node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = _strlen(str);

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	else
	{
		ptr->next = (*head)->next;
		(*head)->next = ptr;
	}
	return (ptr);
}
/**
 * _strlen - function to mesure the length
 * @str: string pointer
 * Return: lenght
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
