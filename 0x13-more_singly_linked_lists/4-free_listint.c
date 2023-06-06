#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list.
 * @head: head
 * Return: NULL
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(h);
		head = h;
	}
}

