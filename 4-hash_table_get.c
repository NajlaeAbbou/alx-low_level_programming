#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value
 * @ht: A pointer
 * @key: key
 * Return: NULL or vaue of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *h_node;
	unsigned long int id;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	id = key_index((const unsigned char *)key, ht->size);
	if (id >= ht->size)
		return (NULL);

	h_node = ht->array[id];
	while (h_node && strcmp(h_node->key, key) != 0)
		h_node = h_node->next;

	return ((h_node == NULL) ? NULL : h_node->value);
}
