#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addnode;
	int i;

	addnode = malloc(sizeof(list_t));
	if (addnode == NULL)
		return (NULL);
	addnode->str = strdup(str);
	for (i = 0; str[i]; i++)
	;

	addnode->len = i;
	addnode->next = *head;
	*head = addnode;

	return (addnode);
}
