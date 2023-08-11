#include "hash_tables.h"

/**
 * hash_table_set - Adds  an element to hash table
 * @ht: A pointer
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *h_node;
	char *value_k;
	unsigned long int id, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_k = strdup(value);
	if (value_k == NULL)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	for (a = id; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value_k;
			return (1);
		}
	}

	h_node = malloc(sizeof(hash_node_t));
	if (h_node == NULL)
	{
		free(value_k);
		return (0);
	}
	h_node->key = strdup(key);
	if (h_node->key == NULL)
	{
		free(h_node);
		return (0);
	}
	h_node->value = value_k;
	h_node->next = ht->array[id];
	ht->array[id] = h_node;

	return (1);
}
