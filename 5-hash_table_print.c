#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: xxx
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *tp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		tp = ht->array[a];
		while (tp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tp->key, tp->value);
			flag = 1;
			tp = tp->next;
		}
	}
	printf("}\n");
}
