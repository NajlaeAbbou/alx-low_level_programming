#include"lists.h"
#include <stdio.h>
/**
 * print_listint_safe -  a function that prints
 * a listint_t linked list.
 * @head: pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL, **newlist;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
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
	newlist[i] = head;
	free(list);
		list = newlist;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
