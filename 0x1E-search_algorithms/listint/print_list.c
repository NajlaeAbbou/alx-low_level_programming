#include <stdio.h>
#include "search_algos.h"

/**
 * print_list - Prints the content of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list(const list_int_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->i);
		list = list->next;
	}
	printf("\n");
}
