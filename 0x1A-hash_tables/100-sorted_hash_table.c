#include "hash_tables.h"
/**
 * shash_table_create - create a new hash table
 * @size: table size
 *
 *
 * Return: return newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	shash_node_t **arr = NULL;

	table = malloc(sizeof(shash_table_t) * 1);
	if (table == NULL)
		return (NULL);
	arr = malloc(sizeof(shash_node_t *) * size);
	if (arr == NULL)
		return (NULL);
	table->size = size;
	table->array = arr;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}
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
 * _free - free Node
 * @node: input node
 */
void _free(shash_node_t *node)
{
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * node_compare - compare two node to see which comes first
 * @node1: first node
 * @node2: second node
 * Return: 1, -1, 0 accordingly
 */
int node_compare(shash_node_t *node1, shash_node_t *node2)
{
	int i = 0;
	char *s1 = (char *)node1->key;
	char *s2 = (char *)node2->key;

	while (s1[i] != '\0')
	{
		char a, b;

		if (s2[i] == '\0')
			return (-1);
		a = s1[i];
		b = s2[i];
		if ((a >= 65 && a <= 90) && (b <= 122 && b >= 97))
		{
			b = b - 32;
		}
		if ((b >= 65 && b <= 90) && (a <= 122 && a >= 97))
		{
			a = a - 32;
		}
		if (a < b)
		{
			return (1);
		}
		if (a > b)
			return (-1);
		i++;
	}
	return (0);
}
/**
 * node_placement - insert node in sorted linked list
 * @ht: the sorted hash table
 * @node: the node to be inserted
 */
void node_placement(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp = NULL, *curr = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp != NULL)
		{
			if (node_compare(node, tmp) == 1)
				break;
			tmp = tmp->snext;
		}
		if (tmp == NULL)
		{
			tmp = ht->stail;
			tmp->snext = node;
			node->sprev = tmp;
			ht->stail = node;
			return;
		}
		if (tmp == ht->shead)
		{
			node->snext = tmp;
			tmp->sprev = node;
			ht->shead = node;
		}
		else
		{
			curr = tmp->sprev;
			node->snext = tmp;
			tmp->sprev = node;
			curr->snext = node;
			node->sprev = curr;
		}
	}
}
/**
 * node_init - create new node
 * @key: is the key
 * @value: is the value
 * Return: newly created node
 */
shash_node_t *node_init(const char *key, const char *value)
{
	shash_node_t *node = NULL;

	node = malloc(sizeof(shash_node_t) * 1);
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
	node->snext = NULL;
	node->sprev = NULL;

	return (node);

}
/**
 * shash_table_set - adds an element to the hash table.
 * @key: is the key
 * @value: is the value
 * @ht: hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node = NULL, *tmp = NULL;

	if ((ht == NULL) || (key == NULL) || (_strlen(key) == 0) || (value == NULL))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = node_init(key, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		node_placement(ht, node);
		return (1);
	}
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (_strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = _strdup(node->value);
			_free(node);
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[index];
	ht->array[index] = node;
	node->next = tmp;
	node_placement(ht, node);
	return (1);
}
/**
 * shash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: is the key
 *
 * Return: returns value corresponding to the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	const unsigned char *k;
	unsigned long int size, index;
	shash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	k = (const unsigned char *)key;
	size = ht->size;
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
/**
 * shash_table_print - print the hash table using the sorted linked list
 * @ht: input hashtable
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (!ht)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s' : '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the hash table in reverse order
 * using the sorted linked list
 *
 * @ht: input hashtable
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (!ht)
		return;
	tmp = ht->stail;

	printf("{");
	while (tmp != NULL)
	{
		printf("'%s' : '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}
#include "hash_tables.h"
/**
 * shash_table_delete - delete the hash table
 * @ht: input hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	while (ht->shead != NULL)
	{
		tmp = ht->shead;
		ht->shead = ht->shead->snext;
		_free(tmp);
	}
	if (ht->array != NULL)
		free(ht->array);
	free(ht);
}
