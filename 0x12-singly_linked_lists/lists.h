#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * print_list - task 0
 * @h: xx
 * Return: xx
 */
size_t print_list(const list_t *h); /*t0*/
/**
 * list_len - task 1
 * @h: xx
 * Return: xx
 */
size_t list_len(const list_t *h); /*t1*/
/**
 * add_node - task 2
 * @head: kk
 * @str:hhh
 * Return: nn
 */
list_t *add_node(list_t **head, const char *str);/*t2*/
/**
 * add_node_end - task 3
 * @head: jjj
 * @str: hh
 * Return: dd
 */
list_t *add_node_end(list_t **head, const char *str);/*t3*/
/**
 * free_list - task 4
 * @head: xx
 * Return: xx
 */
void free_list(list_t *head);/*t4*/

#endif
