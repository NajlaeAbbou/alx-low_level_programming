#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: double pointer
 * @idx: index of the list
 * @n: new node value
 * Return: the address of new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ne, *tp;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tp = *head;
	for (i=0; i < idx - 1 && tp != NULL; i++)
	{
		tp = tp->next;
	}
		if (tp == NULL)
			return (NULL);
	}
	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	if (idx == 0)
	{
		ne->next = *head;
		*head = ne;
		return (ne);
	}
	ne->next = tp->next;
	tp->next = ne;
	return (ne);
}

