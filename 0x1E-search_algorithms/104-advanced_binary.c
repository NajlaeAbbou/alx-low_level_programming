#include "search_algos.h"
#include "1-binary.c"
/**
  * advanced_binary - Searches for a value using advanced binary search.
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
