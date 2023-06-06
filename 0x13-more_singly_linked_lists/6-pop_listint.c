#include "lists.h"
/**
 * pop_listint -  a function that deletes the head
 * node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: pointer
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}


