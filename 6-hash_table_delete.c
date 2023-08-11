#include "hash_tables.h"

/**
 * hash_table_delete - Delete
 * @ht: A pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h_head = ht;
	hash_node_t *h_node, *tp;
	unsigned long int a;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			h_node = ht->array[a];
			while (h_node != NULL)
			{
				tp = h_node->next;
				free(h_node->key);
				free(h_node->value);
				free(h_node);
				h_node = tp;
			}
		}
	}
	free(h_head->array);
	free(h_head);
}
