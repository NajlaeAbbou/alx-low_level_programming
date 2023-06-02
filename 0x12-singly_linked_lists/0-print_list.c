#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 * @h: listname
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		if (h->str == NULL) /*If str is NULL, print [0] (nil)*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
