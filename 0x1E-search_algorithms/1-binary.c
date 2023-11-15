#include "search_algos.h"

/**
  * binary_search - Searches for a value using binary search
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t s, lt, rt;

	if (array == NULL)
		return (-1);

	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (s = lt; s < rt; s++)
			printf("%d, ", array[s]);
		printf("%d\n", array[s]);

		s = lt + (rt - lt) / 2;
		if (array[s] == value)
			return (s);
		if (array[s] > value)
			rt = s - 1;
		else
			lt = s + 1;
	}

	return (-1);
}
