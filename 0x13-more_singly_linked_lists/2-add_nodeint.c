#include "lists.h"
/**
  * add_nodeint -  a function that adds a new node
  * at the beginning of a listint_t list.
  * @head: head
  * @n: int
  * Return:  the address of the new element,
  * or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
