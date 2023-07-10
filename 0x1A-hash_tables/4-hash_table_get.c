#include "hash_tables.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if succeeded and -1 otherwise
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	if (_strlen(s1) != _strlen(s2))
		return (-1);

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: is the key
 *
 * Return: returns value corresponding to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *k = (const unsigned char *)key;
	unsigned long int size = ht->size, index = key_index(k, size);
	hash_node_t *tmp = ht->array[index];

	if (tmp == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (_strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
