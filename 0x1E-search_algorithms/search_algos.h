#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * struct list_int_s - singly linked list
 * @i: Int
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 */
typedef struct list_int_s
{
	int i;
	size_t index;
	struct list_int_s *next;
} list_int_t;

/**
 * struct skip_list_s - Singly linked list
 * @i: Int
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @exp: Pointer to the next node in the express lane
 */
typedef struct skip_list_s
{
	int i;
	size_t index;
	struct skip_list_s *next;
	struct skip_list_s *exp;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif

