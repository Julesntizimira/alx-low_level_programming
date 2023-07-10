#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i = 0, j = 0;
	hash_node_t *tmp = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		printf("{");
		while (i < size)
		{
			tmp = ht->array[i];
			if (tmp != NULL)
			{
				tmp = ht->array[i];
				if (j != 0)
					printf(", ");
				printf("'%s' : '%s'", tmp->key, tmp->value);
				j++;
			}
			i++;
		}
		i = 0;
		while (i < size)
		{
			tmp = ht->array[i];
			if (tmp != NULL && tmp->next != NULL)
			{
				tmp = tmp->next;
				while (tmp != NULL)
				{
					if (j != 0)
						printf(", ");
					printf("'%s' : '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
					j++;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
