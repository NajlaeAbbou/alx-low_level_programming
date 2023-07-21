#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: double pointer
 * @index: index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	curr = tmp->next;
	if (index == 0)
	{
		*head = curr;
		if (curr != NULL)
		{
			curr->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr == NULL)
			return (-1);
		tmp = curr;
	}
	tmp->prev->next = curr;
	if (curr != NULL)
		curr->prev = tmp->prev;
	free(tmp);
	return (1);
}
