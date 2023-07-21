#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the en
 * @head: double pointer
 * @n: value
 * Return: xxx
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *old;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	old = *head;
	while (old->next != NULL)
		old = old->next;
	old->next = new;
	new->prev = old;
	return (new);
}
