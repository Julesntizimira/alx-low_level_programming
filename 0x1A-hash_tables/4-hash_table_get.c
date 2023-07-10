#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: is the key
 *
 * Return: returns value corresponding to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *k;
	unsigned long int size = ht->size, index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	k = (const unsigned char *)key;
	index = key_index(k, size);
	tmp = ht->array[index];

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
