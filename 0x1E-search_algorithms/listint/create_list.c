#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skip_list_t *linear_skip(skip_list_t *list, int value)
{
	skip_list_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->i < value;)
	{
		node = jump;
		if (jump->exp != NULL)
		{
			jump = jump->exp;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->i);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->i < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->i);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->i);

	return (node->i == value ? node : NULL);
}
