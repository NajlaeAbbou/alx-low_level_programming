#include "lists.h"
/**
  * add_nodeint_end - a function that adds a lst node
  * at the end of a listint_t list.
  * @head: head
  * @n: int
  * Return:  the address of the new element,
  * or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lst;
	listint_t *sv;

	if (head == NULL)
		return (NULL);
	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
		return (NULL);
	lst->n = n;
	lst->next = NULL;
	if (*head == NULL)
	{
	*head = lst;
		return (lst);
	}
	sv = *head;
	while (sv->next != NULL)
	{
		sv = sv->next;
	}
	sv->next = lst;
	return (lst);
}

