# include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: hash table size
 * Return: Returns a pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t) * 1);
	if (table == NULL)
		return (NULL);
	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);
	table->array = arr;
	table->size = size;

	while (i < size)
	{
		arr[i] = NULL;
		i++;
	}
	return (table);
}
