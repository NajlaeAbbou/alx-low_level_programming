#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: double pointer
 * @index: index
 * Return: xxx
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return -1;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}
	while (current != NULL)
	{
		if (count == index - 1)
		{
			dlistint_t *node_to_delete = current->next;
			if (node_to_delete == NULL)
				return -1;
			current->next = node_to_delete->next;
			if (node_to_delete->next != NULL)
				node_to_delete->next->prev = current;
			free(node_to_delete);
			return 1;
		}
		current = current->next;
		count++;
	}
	return -1;
}

