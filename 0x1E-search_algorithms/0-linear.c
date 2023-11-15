#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array
 * using linear algo
 * @array: array
 * @size: array size
 * @value: value
 * Return: the index of value found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t s = 0;

	if (!array || size == 0)
		return (-1);

	while (s < size)
	{
		printf("Value checked array[%lu] = [%d]\n", s, array[s]);
		if (array[s] == value)
			return (s);
		s++;
	}

	return (-1);
}
