#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *new;

	tmp = head;
	new = head;
	while (tmp && new && new->next)
	{
		tmp = tmp->next;
		new = new->next->next;
		if (tmp == new)
		{
			tmp = head;
			break;
		}
	}
	if (!tmp || !new || !new->next)
		return (NULL);
	while (tmp != new)
	{
		tmp = tmp->next;
		new = new->next;
	}
	return (new);
}

