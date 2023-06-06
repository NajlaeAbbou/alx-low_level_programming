#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while( i < index )
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
