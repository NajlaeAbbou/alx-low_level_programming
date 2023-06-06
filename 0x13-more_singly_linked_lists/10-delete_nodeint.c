#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: double pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *nxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	nxt = tmp->next;
	tmp->next = nxt->next;
	free(nxt);
	return (1);

}

