#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning 
 * @head: double pointer 
 * @n: value
 * Return: xx
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *newh

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	newh = *head;
	*head = new;
	if (newh != NULL)
		(newh)->prev = new;
	return (new);
}
