#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer of lists
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
}
