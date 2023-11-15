#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_list(list_int_t *list)
{
	list_int_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
