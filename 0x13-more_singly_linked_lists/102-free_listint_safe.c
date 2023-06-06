#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @head: pointer
 * Return:  the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL, **newlist;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
newlist = malloc(num * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < num - 1; i++)
		newlist[i] = list[i];
	newlist[i] = *head;
	free(list);
		list = newlist;
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
