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
} skip_list_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
list_int_t *jump_list(list_int_t *list, size_t size, int value);
list_int_t *create_list(int *array, size_t size);
void free_list(list_int_t *list);
void print_list(const list_int_t *list);
skip_list_t *linear_skip(skip_list_t *list, int value);
#endif

