#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: int
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int a;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(size * sizeof(hash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (a = 0; a < size; a++)
		h_table->array[a] = NULL;
	return (h_table);
}
