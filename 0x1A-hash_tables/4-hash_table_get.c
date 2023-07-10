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
	const unsigned char *k = (const unsigned char *)key;
	unsigned long int size = ht->size, index = key_index(k, size);
	hash_node_t *tmp = ht->array[index];

	if (tmp == NULL || key == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		if (_strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
