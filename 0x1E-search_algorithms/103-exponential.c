#include "search_algos.h"
#include "1-binary.c"

/**
  * exponential_search - Searches for a value using exponential search.
  * @array: A pointer to the first element
  * @size: The number of elments
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t s = 0, rt;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (s = 1; s < size && array[s] <= value; s = s * 2)
			printf("Value checked array[%ld] = [%d]\n", s, array[s]);
	}

	rt = s < size ? s : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", s / 2, rt);
	return (_binary_search(array, s / 2, rt, value));
}
