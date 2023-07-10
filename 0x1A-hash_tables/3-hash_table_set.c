#include "hash_tables.h"

/**
 * _strlen - computes the string length
 * @s: string input
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * _strdup - duplicate string
 * @s: string input
 *
 * Return: duplicate string
 */
char *_strdup(const char *s)
{
	int i = 0, len = _strlen(s);
	char *buff = NULL;

	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (NULL);
	while (i < len)
	{
		buff[i] = s[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @key: is the key
 * @value: is the value
 * @ht: hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	const unsigned char *k =  (const unsigned char *)key;
	unsigned long int size = ht->size, index = key_index(k, size);
	hash_node_t *node = NULL, *tmp = NULL;

	node = malloc(sizeof(hash_node_t) * 1);
	if (node == NULL)
		return (0);
	node->key = _strdup(key);
	node->value = _strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		if (node->key)
			free(node->key);
		free(node);
		return (0);
	}
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	tmp = ht->array[index];
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;

	return (1);
}
