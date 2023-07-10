#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int size = ht->size, i = 0, j = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0, j = 0; i < size; i++)
	{
		if (j && ht->array[i])
			printf(", ");
		for (tmp = ht->array[i]; tmp; tmp = tmp->next)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
				printf(", ");
			j = 1;
		}
	}
	printf("}\n");
}
