#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
