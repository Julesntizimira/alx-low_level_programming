#include "hash_tables.h"
/**
 * hash_table_delete - delete the hash table
 * @ht: input hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i = 0;
	hash_node_t *tmp = NULL, *curr = NULL;

	if (ht == NULL)
		return;

	size = ht->size;
	while (i < size)
	{
		tmp = ht->array[i];
		if (tmp == NULL)
		{
			i++;
			continue;
		}
		while (tmp != NULL)
		{
			curr = tmp;
			tmp = tmp->next;

			free(curr->key);
			free(curr->value);
			free(curr);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
