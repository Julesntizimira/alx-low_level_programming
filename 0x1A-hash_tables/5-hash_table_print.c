#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int size, i = 0, j = 0;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	while (i < size)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (j == 1)
				printf(", ");
			while (tmp != NULL)
			{
				printf("'%s' : '%s'", tmp->key, tmp->value);
				if (tmp->next)
					printf(", ");
				tmp = tmp->next;
			}
			j = 1;
		}
		i++;
	}
	printf("}\n");
}
