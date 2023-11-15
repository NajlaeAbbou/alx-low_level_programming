#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm using jump search.
 * @list: A pointer to the  head
 * @size: The number of nodes
 * @value: The value to search for
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */
list_int_t *jump_list(list_int_t *list, size_t size, int value)
{
	size_t sp, sp_size;
	list_int_t *node, *jp;

	if (list == NULL || size == 0)
		return (NULL);

	sp = 0;
	sp_size = sqrt(size);
	for (node = jp = list; jp->index + 1 < size && jp->i < value;)
	{
		node = jp;
		for (sp += sp_size; jp->index < sp; jp = jp->next)
		{
			if (jp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jp->index, jp->i);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jp->index);

	for (; node->index < jp->index && node->i < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->i);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->i);

	return (node->i == value ? node : NULL);
}
